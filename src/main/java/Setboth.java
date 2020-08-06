import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;

import java.util.ArrayList;
import java.util.List;

public class Setboth {
    public static void command() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(true); // add a new keyboard

        //create a list of keyboard rows
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

        //buttons
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText("$500").setCallbackData("$500same"));
        buttons.add(button1);

        List<InlineKeyboardButton> button2 = new ArrayList<>();
        button2.add(new InlineKeyboardButton().setText("$1,000").setCallbackData("$1,000same"));
        buttons.add(button2);

        List<InlineKeyboardButton> button3 = new ArrayList<>();
        button3.add(new InlineKeyboardButton().setText("$2,000").setCallbackData("$2,000same"));
        buttons.add(button3);

        List<InlineKeyboardButton> button4 = new ArrayList<>();
        button4.add(new InlineKeyboardButton().setText("$2,500").setCallbackData("$2,500same"));
        buttons.add(button4);

        List<InlineKeyboardButton> button5 = new ArrayList<>();
        button5.add(new InlineKeyboardButton().setText("$3,000").setCallbackData("$3,000same"));
        buttons.add(button5);

        List<InlineKeyboardButton> button6 = new ArrayList<>();
        button6.add(new InlineKeyboardButton().setText("$4,000").setCallbackData("$4,000same"));
        buttons.add(button6);

        List<InlineKeyboardButton> button7 = new ArrayList<>();
        button7.add(new InlineKeyboardButton().setText("$5,000").setCallbackData("$5,000same"));
        buttons.add(button7);

        //send button array to Bot variable buttonArray
        Bot.setButtonArray(buttons);

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "\uD83E\uDD16 choose quantity per trade");
    }
}
