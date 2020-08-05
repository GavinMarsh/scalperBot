import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.ArrayList;
import java.util.List;

import static java.lang.Math.toIntExact;

public class Setcontract {
    public static void command() {

            Bot aNewBot = new Bot();
            String answer = "_Saved_  \uD83D\uDCBE";
            EditMessageText new_message = new EditMessageText()
                    .enableMarkdown(true)
                    .setChatId(Bot.getChatId())
                    .setMessageId(toIntExact(Bot.getCbMessageId()))
                    .setText(answer);
            try {
                aNewBot.execute(new_message);
            } catch (TelegramApiException e) {
                e.printStackTrace();
            }

            // add a new keyboard
            Bot.setAddKeyboard(true);

//create a list of keyboard rows
            List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

            //buttons
            List<InlineKeyboardButton> usd = new ArrayList<>();
            usd.add(new InlineKeyboardButton().setText("XBTUSD").setCallbackData("XBTUSD"));
            buttons.add(usd);

            //send button array to Bot variable buttonArray
            Bot.setButtonArray(buttons);

            // new bot object to be able to send a message as sendMsg() is not static
            Bot settings = new Bot();
            settings.sendMsg(Bot.getChatId(), "choose contract");
        }

}
