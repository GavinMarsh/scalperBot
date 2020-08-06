import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.InlineKeyboardMarkup;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class Bot extends TelegramLongPollingBot {

    // class variables
    public static boolean active = false;
    public static Update newUpdate;
    public static String chatId;
    public static String messageText;
    public static String cbTxt;
    public static SendMessage messageId;
    public static long cbMessageId;
    public static boolean addKeyboard;
    public static long cbChatId;
    public static List<List<InlineKeyboardButton>> buttonArray;
    public static String position_size_buy;
    public static String position_size_sell;
    public static String contract;


    @Override
    public void onUpdateReceived(Update update) {

        // local variables
        String buy = ">";
        String sell = "<";
        boolean active = getActive();

        // check if the update has a message with text
        if (update.hasMessage() && update.getMessage().hasText()) {
            setNewUpdate(update);
            setChatId();
            setMessageText();

            if (SignalCheck(getMessageText(), buy) && active) {
                System.out.print("placing buy order");
                setAddKeyboard(false);
                sendMsg(chatId, "\uD83E\uDD16 placing buy order");

            } else if (SignalCheck(getMessageText(), sell) && active) {
                System.out.print("placing sell order");
                setAddKeyboard(false);
                sendMsg(chatId, "\uD83E\uDD16 placing sell order");

            } else switch (getMessageText()) {
                case "/start":
                    Start.command();
                    break;
                case "/stop":
                    Stop.command();
                    break;
                case "/sleep":
                    Sleep.command();
                    break;
                case "/setsame":
                    Setsame.command();
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
            setNewUpdate(update);
            setCbTxt();
            setCbMessageID();
            setCbChatId();

            switch (getCbTxt()) {
                case "trade settings":
                    TradeSettings.command();
                    break;
                case "same order size":
                    Setsame.command();
                    break;
                case "$500same":
                    setPositionSizeBuy("$500");
                    setPositionSizeSell("$500");
                    Setcontract.command();
                    break;
                case "$1,000same":
                    setPositionSizeBuy("$1,000");
                    setPositionSizeSell("$1,000");
                    Setcontract.command();
                    break;
                case "$2,000same":
                    setPositionSizeBuy("$2,000");
                    setPositionSizeSell("$2,000");
                    Setcontract.command();
                    break;
                case "$2,500same":
                    setPositionSizeBuy("$2,500");
                    setPositionSizeSell("$2,500");
                    Setcontract.command();
                    break;
                case "$3,000same":
                    setPositionSizeBuy("$3,000");
                    setPositionSizeSell("$3,000");
                    Setcontract.command();
                    break;
                case "$4,000same":
                    setPositionSizeBuy("$4,000");
                    setPositionSizeSell("$4,000");
                    Setcontract.command();
                    break;
                case "$5,000same":
                    setPositionSizeBuy("$5,000");
                    setPositionSizeSell("$5,000");
                    Setcontract.command();
                    break;
                case "XBTUSD":
                    setContract("XBTUSD");
                    Activate.command();
                    break;
                case "activate":
                    Activate.command();
                    break;
                case "/sleep":
                    Sleep.command();
                    break;
                case "/setsame":
                    Setsame.command();
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
                case "settings":
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
        }
    }

    /**
     * Method for checking if message contains a signal.
     */
    public static boolean SignalCheck (String messageText, String signal){
        Pattern validPattern;
        validPattern = Pattern.compile(signal);
        Matcher matcher = validPattern.matcher(messageText);
        return matcher.find();
    }

    /**
     * Method for sending a message to the user.
     */
    public synchronized void sendMsg(String chatId, String s) {
        SendMessage message = new SendMessage();
        setMessageId(message);
        message.enableMarkdown(true);
        message.setChatId(chatId);
        message.setText(s);
        if (getAddKeyboard()) {
            inlineKeyboard(message, getButtonArray());
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
    public static void inlineKeyboard(SendMessage message, List<List<InlineKeyboardButton>> buttons) {
        InlineKeyboardMarkup markupInline = new InlineKeyboardMarkup();
        markupInline.setKeyboard(buttons);
        message.setReplyMarkup(markupInline);
    }

    /**
     * Getter Method to get button array list.
     */
    public static List<List<InlineKeyboardButton>> getButtonArray() {
        return buttonArray;
    }

    /**
     * Setter Method to set button array list.
     */
    public static void setButtonArray(List<List<InlineKeyboardButton>> buttonList) {
        buttonArray = buttonList;
    }

    /**
     * Setter Method for Call back chat id.
     */
    public static void setCbChatId() {
        cbChatId = getNewUpdate().getCallbackQuery().getMessage().getChatId();
    }

    /**
     * Setter Method for position_size_buy.
     */
    private static void setPositionSizeBuy(String size) {
        position_size_buy = size;
    }

    /**
     * Getter Method for position_size_buy.
     */
    public static String getPositionSizeBuy() {
        return position_size_buy;
    }

    /**
     * Setter Method for position_size_sell.
     */
    private static void setPositionSizeSell(String size) {
        position_size_sell = size;
    }

    /**
     * Getter Method for position_size_sell.
     */
    public static String getPositionSizeSell() {
        return position_size_sell;
    }

    /**
     * Setter Method for contract.
     */
    public static void setContract(String symbol) {
        contract = symbol;
    }

    /**
     * Getter Method for contract.
     */
    public static String getContract() {
        return contract;
    }

    /**
     * Setter Method for call back message id.
     */
    private static void setCbMessageID() {
        cbMessageId = getNewUpdate().getCallbackQuery().getMessage().getMessageId();
    }

    /**
     * Getter Method for call back message id.
     */
    public static long getCbMessageId() {
        return cbMessageId;
    }

    /**
     * Setter Method for call back text.
     */
    public static void setCbTxt() {
        cbTxt = getNewUpdate().getCallbackQuery().getData();
    }

    /**
     * Getter Method for call back text.
     */
    public static String getCbTxt() {
        return cbTxt;
    }

    /**
     * Getter Method for active.
     */
    public static boolean getActive() {
        return active;
    }

    /**
     * Setter Method for active.
     */
    public static void setActive(boolean isActive) {
        active = isActive;
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
     * Setter method to set newUpdate.
     */
    public static void setNewUpdate (Update update){
        newUpdate = update;
    }

    /**
     * Getter method to get newUpdate.
     */
    public static Update getNewUpdate(){
        return newUpdate;
    }

    /**
     * Setter method to set new message id.
     */
    public static void setMessageId(SendMessage message) {
        messageId = message;
    }

    /**
     * Getter method to get new message.
     */
    public static String getMessageText() {
        return messageText;
    }

    /**
     * Setter method to set new message update.
     */
    public static void setMessageText() {
        messageText = getNewUpdate().getMessage().getText();
    }

    /**
     * Setter method to set chatID.
     */
    public static void setChatId (){
        chatId = getNewUpdate().getMessage().getChatId().toString();
    }

    /**
     * Getter method to return chatID.
     */
    public static String getChatId() {
        return chatId;
    }

    /**
     * Getter method to return bot username.
     */
    public String getBotUsername() {
        return "ScalperTelegramBot";
    }

    /**
     * Getter method to return bot token.
     */
    public String getBotToken() {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0";
    }
}

