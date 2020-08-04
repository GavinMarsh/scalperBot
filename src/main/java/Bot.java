import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.InlineKeyboardMarkup;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import static java.lang.Math.toIntExact;


public class Bot extends TelegramLongPollingBot {

    // class variables
    public static Update newUpdate;
    public static String chatId;
    public static String messageText;
    public static SendMessage messageId;
    public static String buttonText;
    public static boolean addKeyboard;
    public static String callBackData;

    @Override
    public void onUpdateReceived(Update update) {

        // check if the update has a message with text
        if (update.hasMessage() && update.getMessage().hasText()) {
            setNewUpdate(update);
            setChatId();
            setMessageText();

            switch (getMessageText()) {
                case "/start":
                    Start.command();
                    break;
                case "/stop":
                    Stop.command();
                    break;
                case "/sleep":
                    Sleep.command();
                    break;
                case "/setall":
                    Setall.command();
                    break;
                case "/setbuy":
                    Setbuy.command();
                    break;
                case "/setsell":
                    Setsell.command();
                    break;
                case "/setcontract":
                    Setcontract.command();
                    break;
                case "/settings":
                    Settings.command();
                    break;
                case "/positions":
                    Positions.command();
                    break;
                case "/orders":
                    Orders.command();
                    break;
                case "/marginbox":
                    Marginbox.command();
                    break;
                case "/balance":
                    Balance.command();
                    break;
                case "/pnl":
                    Pnl.command();
                    break;
                case "/margin":
                    Margin.command();
                    break;
                case "/leverage":
                    Leverage.command();
                    break;
                default:
                    Help.command();
            }

        }else if (update.hasCallbackQuery()) {
                // Set variables
                String call_data = update.getCallbackQuery().getData();
                long message_id = update.getCallbackQuery().getMessage().getMessageId();
                long chatId = update.getCallbackQuery().getMessage().getChatId();

                if (call_data.equals("update_msg_text")) {
                    String answer = "Updated message text";
                    EditMessageText new_message = new EditMessageText()
                            .setChatId(chatId)
                            .setMessageId(toIntExact(message_id))
                            .setText(answer);
                    try {
                        execute(new_message);
                    } catch (TelegramApiException e) {
                        e.printStackTrace();
                    }
                }
        }
    }


    /**
     * Method for checking if message contains a signal.
     */
    public boolean SignalCheck (String messageText, String signal){
        Pattern validPattern;
        validPattern = Pattern.compile(signal);
        Matcher matcher = validPattern.matcher(messageText);
        return matcher.find();
    }

    public synchronized void sendMsg(String chatId, String s) {
        SendMessage message = new SendMessage();
        setMessageId(message);
        message.enableMarkdown(true);
        message.setChatId(chatId);
        message.setText(s);
        if (getAddKeyboard()) {
            inlineKeyboard(message, getButtonText(), getCallBackData());
        }
        try {
            execute(message);
        } catch (TelegramApiException e) {
            Logger log = null;
            assert false;
            log.log(Level.SEVERE, "Exception: ", e.toString());
        }
    }

    /**
     * Method to add an inlineKeyboard to a message.
     */
    public static void inlineKeyboard(SendMessage message, String buttonText, String callBackData) {
        // Add inlineKeyboard to message
        InlineKeyboardMarkup markupInline = new InlineKeyboardMarkup();
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText(buttonText).setCallbackData(callBackData));
        // Set the keyboard to the markup
        buttons.add(button1);

        markupInline.setKeyboard(buttons);
        message.setReplyMarkup(markupInline);
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
    public boolean getAddKeyboard() {
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
    public static String getCallBackData() {
        return callBackData;
    }

    /**
     * Setter Method for setting CallBackCode.
     * @return
     */
    public static String setCallBackData(String data) {
        callBackData = data;
        return data;
    }

    /**
     * Getter method to return bot username.
     */
    @Override
    public String getBotUsername () {
        return "ScalperTelegramBot";
    }

    /**
     * Getter method to return bot token.
     */
    @Override
    public String getBotToken () {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0";
    }

    /**
     * Setter method to set newUpdate.
     */
    private void setNewUpdate (Update update){
        newUpdate = update;
    }

    /**
     * Getter method to get newUpdate.
     */
    public Update getNewUpdate (){
        return newUpdate;
    }

    /**
     * Setter method to set new message id.
     */
    private void setMessageId(SendMessage message) {
        messageId = message;
    }

    /**
     * Getter method to get new message id.
     */
    public static SendMessage getMessageId() {
        return messageId;
    }

    /**
     * Getter method to get new message.
     */
    public String getMessageText() {
        return messageText;
    }

    /**
     * Setter method to set new message update.
     */
    private void setMessageText() {
        messageText = getNewUpdate().getMessage().getText();
    }

    /**
     * Setter method to set chatID.
     */
    private void setChatId (){
        chatId = getNewUpdate().getMessage().getChatId().toString();
    }

    /**
     * Getter method to return chatID.
     * @return
     */
    public static String getChatId() {
        return chatId;
    }
}

