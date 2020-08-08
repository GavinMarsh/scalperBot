import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import java.util.ArrayList;
import java.util.List;

public class SetupComplete {

    public static void command() {
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("activate").setCallbackData("activate"));
        buttons.add(row1);

        List<InlineKeyboardButton> row2 = new ArrayList<>();
        row2.add(new InlineKeyboardButton().setText("settings").setCallbackData("settings"));
        buttons.add(row2);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "🤖 setup complete");
    }
}
