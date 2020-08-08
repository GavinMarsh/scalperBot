import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Offline {
    public static void command(){

        Bot.setAddKeyboard(true);

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("activate").setCallbackData("activate"));
        row1.add(new InlineKeyboardButton().setText("settings").setCallbackData("settings"));
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);
        Bot offline = new Bot();
        offline.sendMsg(Bot.chatId, "\uD83E\uDD16 bot offline");
    }
}
