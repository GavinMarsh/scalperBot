import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Setorder {

        public static void command(String contract) {

            Bot.setContract(contract);
            Bot.messageDelete(); //delete previous message
            Bot.setAddKeyboard(true); // add a new keyboard

            //create a list of keyboard rows
            List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

            //buttons
            List<InlineKeyboardButton> row1 = new ArrayList<>();
            row1.add(new InlineKeyboardButton().setText("buy").setCallbackData("setbuy"));
            row1.add(new InlineKeyboardButton().setText("sell").setCallbackData("setsell"));
            row1.add(new InlineKeyboardButton().setText("both").setCallbackData("setboth"));
            buttons.add(row1);

            //send button array to Bot variable buttonArray
            Bot.setButtonArray(buttons);

            // new bot object to be able to send a message as sendMsg() is not static
            Bot settings = new Bot();
            settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose order side");
        }
}


