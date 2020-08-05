import org.telegram.telegrambots.meta.api.methods.updatingmessages.EditMessageText;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;

import static java.lang.Math.toIntExact;

public class Help {
    public static void command() {
        System.out.print("got to help class");

        Bot aNewBot = new Bot();
        String answer = "\uD83E\uDD16 I can trade your strategy 24/7/365.\n" +
                "\n" +
                "You can control me by sending these commands:\n" +
                "\n" +
                "*Bot Settings*\n" +
                "/start - turn on\n" +
                "/stop -  turn off\n" +
                "/sleep - put to sleep\n" +
                "/help - show commands\n" +
                "\n" +
                "*Trade Settings*\n" +
                "/setsame- change buy/sell to same size\n" +
                "/setbuy - change buy order size\n" +
                "/setsell - change sell order size\n" +
                "/setcontract - change contract to trade\n" +
                "\n" +
                "*Trade Info*\n" +
                "/settings - show current settings\n" +
                "/positions - show open positions\n" +
                "/orders - show open orders\n" +
                "/margin - show BitMEX margin box\n" +
                "\n" +
                "*Account Info*\n" +
                "/balance - show account balance\n" +
                "/pnl - show unrealised pnl\n" +
                "/accountmargin - show account margin\n" +
                "/leverage - show account leverage";
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
    }
}
