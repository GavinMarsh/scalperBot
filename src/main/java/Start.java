public class Start {

    public static void command() {
        Bot settings = new Bot();
        Bot.setAddKeyboard(true); // breaks when I set to true ???
        Bot.setButtonText("Update message text");
        System.out.print(Bot.getButtonText());
        Bot.setCallBackData("update_msg_text");
        settings.sendMsg(Bot.getChatId(), "you sent /start");

    }
}
