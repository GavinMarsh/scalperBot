import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Start {

    public static void command() {

        Bot.setAddKeyboard(true); // add a keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("setup").setCallbackData("/setstrategy"));
        buttons.add(row1);


        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), "\uD83E\uDD16 online");

    }
}
