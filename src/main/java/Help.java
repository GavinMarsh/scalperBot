public class Help {
    public static void command() {

        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(false); //remove keyboard

        Bot helpBot = new Bot();
        helpBot.sendMsg(Bot.getChatId(), "\uD83E\uDD16 I can trade your strategy 24/7/365.\n" +
                "\n" +
                "You can control me by sending these commands:\n" +
                "\n" +
                "*Bot*\n" +
                "/start - turn on\n" +
                "/stop -  turn off\n" +
                "/sleep - put to sleep\n" +
                "/help - show commands\n" +
                "\n" +
                "*Settings*\n" +
                "/settings - show current settings\n" +
                "/setstrategy - change strategy\n" +
                "/setcontract - change trading contract\n" +
                "/setbuy - change buy order qty\n" +
                "/setsell - change sell order qty\n" +
                "/setboth- match buy/sell order qty\n" +
                "\n" +
                "*Orders*\n" +
                "/positions - show open positions\n" +
                "/orders - show open orders\n" +
                "/cancel - cancel open orders\n" +
                "\n" +
                "*Account*\n" +
                "/margin - show BitMEX margin-box\n" +
                "/balance - show account balance\n" +
                "/pnl - show unrealised pnl\n" +
                "/accountmargin - show account margin\n" +
                "/leverage - show account leverage");
    }
}
