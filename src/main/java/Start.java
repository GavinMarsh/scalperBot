import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Start {

    public static void command() {
        // add a keyboard
        Bot.setAddKeyboard(true);

        //add button array list
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText("setup bot").setCallbackData("setup bot"));
        buttons.add(button1);
        Bot.setButtonArray(buttons);

        Bot.setCallBackSent("setup bot");

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 online");

    }
}
