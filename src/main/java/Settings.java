import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import static java.lang.Math.toIntExact;

public class Settings {

    private static Bot settingsBot = new Bot();
    private static String trading;
    private static String text = "\uD83E\uDD16 current settings\n" +
            "\n" +
            "contract = " +
            Bot.getContract() + "\n\n" +
            "buy order size = " +
            Bot.getPositionSizeBuy() + "\n\n" +
            "sell order size = " +
            Bot.getPositionSizeSell() + "\n\n" +
            "\n" +
            "bot trading = " + getTrading();

    public static void isActive() {
        if (Bot.getActive()) {
            setTrading("*Yes*");
        } else
            setTrading("*No*");
    }

    /**
     * Setter Method for trading var.
     */
    public static void setTrading(String answer){
        trading = answer;
    }

    /**
     * Getter Method for trading var.
     */
    public static String getTrading(){
        return trading;
    }

    public static void fromKeyboard() {

        Bot.setAddKeyboard(false); //remove keyboard
        isActive(); //is bot active

        EditMessageText new_message = new EditMessageText()
                .setChatId(Bot.getChatId())
                .setMessageId(toIntExact(Bot.getCbMessageId()))
                .enableMarkdown(true)
                .setText(text);
        try {
            settingsBot.execute(new_message);
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }

    public static void fromText() {
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(false); //remove keyboard
        isActive(); //is bot active

        settingsBot.sendMsg(Bot.getChatId(), text);
    }
}
