import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Settings {

    public static void command() {

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
        buttons.add(row1);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        System.out.print("active = " + Bot.active + "\n");
        System.out.print("strategy = " + Bot.strategy + "\n");
        System.out.print("buy = " + Bot.position_size_buy + "\n");
        System.out.print("sell = " + Bot.position_size_sell + "\n");
        System.out.print("contract = " + Bot.contract+ "\n");
        System.out.print("trading = " + Bot.trading + "\n");
    }
}
