public class Initialise implements Runnable {

    // Method sends show server up message to Telegram
    public void run() {

        // set up heartbeat
        Bot botObject = new Bot();
        try {
            Thread.sleep(3600000); //sleep for 60 minutes
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        while (true) {
            botObject.sendMsg(botObject.chatId, "\uD83E\uDD16 online");

            try {
                Thread.sleep(3600000); //sleep for 60 minutes
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

}