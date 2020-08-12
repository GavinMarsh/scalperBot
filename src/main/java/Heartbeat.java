public class Heartbeat implements Runnable {

    // Method sends show server up message to Telegram
    public void run() {
        Bot botObject = new Bot();

        while (true) {
            botObject.sendMsg("566251065", "\uD83D\uDD0C server on");

            try {
                Thread.sleep(3600000); //sleep for 60 minutes
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
