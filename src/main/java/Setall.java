import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.ArrayList;
import java.util.List;

import static java.lang.Math.toIntExact;

public class Setall {
    public static void command() {

        Bot aNewBot = new Bot();
        String answer = "\uD83E\uDD16";
        EditMessageText new_message = new EditMessageText()
                .setChatId(Bot.getChatId())
                .setMessageId(toIntExact(Bot.getCbMessageId()))
                .setText(answer);
        try {
            aNewBot.execute(new_message);
        } catch (TelegramApiException e) {
            e.printStackTrace();
        }

        // add a new keyboard
        Bot.setAddKeyboard(true);

        //add button array list
        List<List<InlineKeyboardButton>> buttons = new ArrayList<>();
        List<InlineKeyboardButton> button1 = new ArrayList<>();
        button1.add(new InlineKeyboardButton().setText("$1,000").setCallbackData("$1,000"));
        buttons.add(button1);
        Bot.setButtonArray(buttons);

        aNewBot.sendMsg(Bot.getChatId(), "Choose position size");
        Bot.setCallBackSent("Position Size:");
    }
}
