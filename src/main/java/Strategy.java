import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import java.util.ArrayList;
import java.util.List;

public class Strategy {

    public static void command() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("scalper").setCallbackData("scalper"));
        buttons.add(row1);

        List<InlineKeyboardButton> row2 = new ArrayList<>();
        row2.add(new InlineKeyboardButton().setText("backwardation").setCallbackData("backwardation"));
        buttons.add(row2);

        List<InlineKeyboardButton> row3 = new ArrayList<>();
        row3.add(new InlineKeyboardButton().setText("weekly highs/lows").setCallbackData("weekly highs/lows"));
        buttons.add(row3);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose strategy");
    }
}
