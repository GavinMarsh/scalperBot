public class Help {
    public static void command() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(false); //remove keyboard

        Bot helpBot = new Bot();
        helpBot.sendMsg(Bot.getChatId(), "\uD83E\uDD16 I can trade your strategy 24/7/365.\n" +
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
                "/setstrategy - change system to trade\n" +
                "/setcontract - change contract to trade\n" +
                "/setbuy - change buy order size\n" +
                "/setsell - change sell order size\n" +
                "/setboth- change buy/sell to same size\n" +
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
                "/leverage - show account leverage");
    }

}
