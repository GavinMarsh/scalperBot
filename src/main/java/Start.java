import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Start {

    public static void command() {
        // add a keyboard
        Bot.setAddKeyboard(true);

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> tradeSettings = new ArrayList<>();
        tradeSettings.add(new InlineKeyboardButton().setText("trade settings").setCallbackData("trade settings"));
        buttons.add(tradeSettings);

        List<InlineKeyboardButton> help = new ArrayList<>();
        help.add(new InlineKeyboardButton().setText("help").setCallbackData("help"));
        buttons.add(help);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), "\uD83E\uDD16 online");

    }
}
