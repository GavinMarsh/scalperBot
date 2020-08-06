import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.api.objects.replykeyboard.buttons.InlineKeyboardButton;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import java.util.ArrayList;
import java.util.List;

import static java.lang.Math.toIntExact;

public class TradeSettings {

        public static void command() {

            Bot aNewBot = new Bot();
            String answer = "*Trade Settings*";
            EditMessageText new_message = new EditMessageText()
                    .enableMarkdown(true)
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

            //create a list of keyboard rows
            List<List<InlineKeyboardButton>> buttons = new ArrayList<>();

            //buttons
            List<InlineKeyboardButton> setsame = new ArrayList<>();
            setsame.add(new InlineKeyboardButton().setText("same order size").setCallbackData("same order size"));
            buttons.add(setsame);

            List<InlineKeyboardButton> setbuy  = new ArrayList<>();
            setbuy.add(new InlineKeyboardButton().setText("buy order size").setCallbackData("buy order size"));
            buttons.add(setbuy);

            List<InlineKeyboardButton> setsell = new ArrayList<>();
            setsell.add(new InlineKeyboardButton().setText("sell order size").setCallbackData("sell order size"));
            buttons.add(setsell);

            //send button array to Bot variable buttonArray
            Bot.setButtonArray(buttons);

            // new bot object to be able to send a message as sendMsg() is not static
            Bot settings = new Bot();
            settings.sendMsg(Bot.getChatId(), "choose same or individual");
        }
}


