import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import java.util.ArrayList;
import java.util.List;

public class Start {

    public static void command() {

        // initialise settings
        Bot.strategy = "n/a";
        Bot.contract = "n/a";
        Bot.position_size_buy = "$0";
        Bot.position_size_sell = "$0";
        Bot.active = false;
        Bot.trading = "*no*";

        Bot.setAddKeyboard(true); // add a keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("setup").setCallbackData("setstrategy"));
        buttons.add(row1);

        List<InlineKeyboardButton> row2 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText("settings").setCallbackData("settings"));
        buttons.add(row2);

        List<InlineKeyboardButton> row3 = new ArrayList<>();
        row3.add(new InlineKeyboardButton().setText("activate").setCallbackData("activate"));
        buttons.add(row3);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), "\uD83E\uDD16 bot online");
    }
}
