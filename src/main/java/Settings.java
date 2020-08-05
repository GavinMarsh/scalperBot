import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import static java.lang.Math.toIntExact;

public class Settings {
    public static void command() {

        Bot settings = new Bot();
        String answer = "\uD83E\uDD16 These are your current settings\n" +
                "\n" +
                "Contract = " +
                Bot.getContract() + "\n" +
                "Buy order size = " +
                Bot.getPositionSizeBuy() +
                "\n" +
                "Sell order size = " +
                Bot.getPositionSizeSell() + "\n" +
                "\n" +
                "Bot Trading = *Yes*\n";

        EditMessageText new_message = new EditMessageText()
                .enableMarkdown(true)
                .setChatId(Bot.getChatId())
                .setMessageId(toIntExact(Bot.getCbMessageId()))
                .setText(answer);
        try {
            settings.execute(new_message);
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }
}
