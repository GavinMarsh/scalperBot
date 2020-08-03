import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.AnswerCallbackQuery;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.InlineKeyboardMarkup;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.ReplyKeyboardMarkup;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.KeyboardButton;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.KeyboardRow;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import static java.lang.StrictMath.toIntExact;


public class Bot extends TelegramLongPollingBot {

    //Class variables
    public static String buttonText = ""; //var to store inline button message.
    public static boolean addKeyboard = false; //add keyboard with message?
    public static String callBackCode = "test"; //var to store callBackData.
    public static final String chatId = "566251065"; //bot chatId

    /**
     * Method that initialises bot settings.
     */
    public static void initialiseBot() {
        Bot messengerBot = new Bot();
        setAddKeyboard(true);
        setButtonText("setup bot");
        setCallBackCode("setup bot");
        messengerBot.sendMsg(chatId, "\uD83E\uDD16 online");
    }

    /**
     * Method for processing incoming messages.
     */
    public void onUpdateReceived(Update update) {
        // collect message and check if it contains a signal
        String msg = update.getMessage().getText();
        String buy = ">";
        String sell = "<";
        boolean active = Settings.getActive();
        boolean sleep = Settings.getSleep();

        if (SignalCheck(msg, buy) && active && !sleep) {
            System.out.print("placing buy order");
            setAddKeyboard(false);
            sendMsg(chatId, "\uD83E\uDD16 placing buy order");

        } else if (SignalCheck(msg, sell) && !sleep) {
            System.out.print("placing sell order");
            setAddKeyboard(false);
            sendMsg(chatId, "\uD83E\uDD16 placing sell order");

        }
    }

    /**
     * Method for checking if message contains a signal.
     */
    public boolean SignalCheck(String msg, String signal) {
        Pattern validPattern;
        validPattern = Pattern.compile(signal);
        Matcher matcher = validPattern.matcher(msg);
        return matcher.find();
    }

    /**
     * Method for creating a message and sending it.
     * @param chatId chat id
     * @param s The String that you want to send as a message.
     */
    public synchronized void sendMsg(String chatId, String s) {
        SendMessage execute = new SendMessage();
        execute.enableMarkdown(true);
        execute.setChatId(chatId);
        execute.setText(s);
        if (getAddKeyboard()) {
            inlineKeyboard(execute, getButtonText());
        }
        try {
            execute(execute);
        } catch (TelegramApiException e) {
            Logger log = null;
            assert false;
            log.log(Level.SEVERE, "Exception: ", e.toString());
        }
    }

    /**
     * Method to add an inlineKeyboard to a message.
     */
    public static void inlineKeyboard(SendMessage message, String buttonText) {
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText(buttonText).setCallbackData(getCallBackCode()));
        // Set the keyboard to the markup
        buttons.add(button1);
        // Add it to the message
        InlineKeyboardMarkup markupKeyboard = new InlineKeyboardMarkup();
        markupKeyboard.setKeyboard(buttons);
        message.setReplyMarkup(markupKeyboard);
    }

    /**
     * Getter Method for buttonText.
     */
    public static String getButtonText() {
        return buttonText;
    }

    /**
     * Setter Method for buttonText.
     */
    public static void setButtonText(String text) {
        buttonText = text;
    }

    /**
     * Getter Method for addKeyboard.
     */
    public static boolean getAddKeyboard() {
        return addKeyboard;
    }

    /**
     * Setter Method for addKeyboard.
     */
    public static void setAddKeyboard(boolean keyboard) {
        addKeyboard = keyboard;
    }

    /**
     * Getter Method for getting CallBackCode.
     */
    public static String getCallBackCode() {
        return callBackCode;
    }

    /**
     * Setter Method for setting CallBackCode.
     */
    public static void setCallBackCode(String code) {
        callBackCode = code;
    }

    /**
     * Returns bot name.
     */
    public String getBotUsername() {
        return "ScalperTelegramBot";
    }

    /**
     * Returns bot token.
     */
    public String getBotToken() {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0"; //change this to read from local file
    }
}

