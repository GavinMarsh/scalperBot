import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import java.util.ArrayList;
import java.util.List;

public class Settings{

    public static void command() {
        String answer = "\uD83E\uDD16 These are my current settings\n" +
                "\n" +
                "Strategy = " +
                Bot.getStrategy() + "\n" +
                "Contract = " +
                Bot.getContract() + "\n" +
                "Buy qty = " +
                Bot.getPositionSizeBuy() +
                "\n" +
                "Sell qty = " +
                Bot.getPositionSizeSell() + "\n" +
                "\n" +
                "Bot Trading = " + Bot.trading +"\n";

        String button_name = "";
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        if (Bot.active) {
            button_name = "de-activate";
        } else {
            button_name = "activate";
        }

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        List<InlineKeyboardButton> row1 = new ArrayList<>();
        row1.add(new InlineKeyboardButton().setText(button_name).setCallbackData(button_name));
        row1.add(new InlineKeyboardButton().setText("setup").setCallbackData("setstrategy"));
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);
        Bot start = new Bot();
        start.sendMsg(Bot.getChatId(), answer);
    }
}
