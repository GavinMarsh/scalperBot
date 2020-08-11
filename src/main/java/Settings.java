import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import java.util.ArrayList;
import java.util.List;

public class Settings{

    /**
     * Method to show current settings.
     */
    public static void showSettings() {
        String answer = "\uD83E\uDD16 These are my current settings\n" +
                "\n" +
                "Strategy = " +
                Bot.getStrategy() + "\n" +
                "Contract = " +
                Bot.getContract() + "\n" +
                "Buy qty = " +
                Bot.getPositionSizeBuy() +
                "\n" +
                "Sell qty = " +
                Bot.getPositionSizeSell() + "\n" +
                "\n" +
                "Bot Trading = " + Bot.trading +"\n";

        String button_name = "";
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        if (Bot.active) {
            button_name = "de-activate";
        } else {
            button_name = "activate";
        }

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText(button_name).setCallbackData(button_name));
        row1.add(new InlineKeyboardButton().setText("setup").setCallbackData("setstrategy"));
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), answer);
    }

    /**
     * Method for user to choose strategy
     */
    public static void setStrategy() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("scalper").setCallbackData("scalper"));
        buttons.add(row1);

        List<InlineKeyboardButton> row2 = new ArrayList<>();
        row2.add(new InlineKeyboardButton().setText("backwardation").setCallbackData("backwardation"));
        buttons.add(row2);

        List<InlineKeyboardButton> row3 = new ArrayList<>();
        row3.add(new InlineKeyboardButton().setText("weekly highs/lows").setCallbackData("weekly highs/lows"));
        buttons.add(row3);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose strategy");
    }

    /**
     * Method to show setup complete screen to user.
     */
    public static void showSetupComplete() {
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("activate").setCallbackData("activate"));
        buttons.add(row1);

        List<InlineKeyboardButton> row2 = new ArrayList<>();
        row2.add(new InlineKeyboardButton().setText("settings").setCallbackData("settings"));
        buttons.add(row2);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "🤖 setup complete");
    }

    /**
     * Medthod to setup order quantity.
     * @param side of the order that is to be updated.
     */
    public static void setQty(String side) {

        Bot.qtySide = side;
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText("$500").setCallbackData("$500"));
        buttons.add(button1);

        List<InlineKeyboardButton> button2 = new ArrayList<>();
        button2.add(new InlineKeyboardButton().setText("$1,000").setCallbackData("$1,000"));
        buttons.add(button2);

        List<InlineKeyboardButton> button3 = new ArrayList<>();
        button3.add(new InlineKeyboardButton().setText("$2,000").setCallbackData("$2,000"));
        buttons.add(button3);

        List<InlineKeyboardButton> button4 = new ArrayList<>();
        button4.add(new InlineKeyboardButton().setText("$2,500").setCallbackData("$2,500"));
        buttons.add(button4);

        List<InlineKeyboardButton> button5 = new ArrayList<>();
        button5.add(new InlineKeyboardButton().setText("$3,000").setCallbackData("$3,000"));
        buttons.add(button5);

        List<InlineKeyboardButton> button6 = new ArrayList<>();
        button6.add(new InlineKeyboardButton().setText("$4,000").setCallbackData("$4,000"));
        buttons.add(button6);

        List<InlineKeyboardButton> button7 = new ArrayList<>();
        button7.add(new InlineKeyboardButton().setText("$5,000").setCallbackData("$5,000"));
        buttons.add(button7);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose quantity per trade");
    }

    /**
     * Method to show user the order side options.
     * @param contract option chosen by user.
     */
    public static void showOrderSideOptions(String contract) {

        Bot.setContract(contract);
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("buy").setCallbackData("setbuy"));
        row1.add(new InlineKeyboardButton().setText("sell").setCallbackData("setsell"));
        row1.add(new InlineKeyboardButton().setText("both").setCallbackData("setboth"));
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 set order type");
    }

    /**
     * Method to set the contract to trade.
     */
    public static void showContractOptions() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("XBTUSD").setCallbackData("XBTUSD"));
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose contract");
    }

    /**
     * Method to set the fixed order qty.
     * @param side is the order side to update.
     * @param qty is the dollar amount to update.
     */
    public static void setQty(String side, String qty) {
        if (side.equals("both")){
            Bot.position_size_buy = qty;
            Bot.position_size_sell = qty;
        } else if (side.equals("buy")){
            Bot.position_size_buy = qty;
        } else if (side.equals("sell")){
            Bot.position_size_sell = qty;
        }

        // send use to setup complete stage.
        Settings.showSetupComplete();
    }
}
