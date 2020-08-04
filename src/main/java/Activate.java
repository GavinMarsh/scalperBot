import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import static java.lang.Math.toIntExact;

public class Activate {

    public static void command() {
        Bot.setActive(true);

        Bot aNewBot = new Bot();
        String answer = "Okay i'm trading Master";
        EditMessageText new_message = new EditMessageText()
                .setChatId(Bot.getChatId())
                .setMessageId(toIntExact(Bot.getCbMessageId()))
                .setText(answer);
        try {
            aNewBot.execute(new_message);
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }
    }
}
