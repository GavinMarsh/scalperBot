import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Setcontract {
    public static void command() {

            Bot.messageDelete(); //delete previous message
            Bot.setAddKeyboard(true); // add a new keyboard

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

}
