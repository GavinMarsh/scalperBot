import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Activate {

    public static void command() {
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard
        Bot.active = true;
        Bot.trading = "*yes*";

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> showSettings = new ArrayList<>();
        showSettings.add(new InlineKeyboardButton().setText("stop").setCallbackData("stop"));
        showSettings.add(new InlineKeyboardButton().setText("settings").setCallbackData("settings"));
        buttons.add(showSettings);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "🤖 okay i'm trading");
    }
}
