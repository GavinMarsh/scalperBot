public class Stop {
    public static void command() {
        Bot.active = false;
        Bot.trading = "*no*";
        Bot.messageDelete(); //delete previous message
        Bot.setAddKeyboard(false); // add a new keyboard

        // new bot object to be able to send a message as sendMsg() is not static
        Bot settings = new Bot();
        settings.sendMsg(Bot.getChatId(), "🤖 bot offline");
    }
}
