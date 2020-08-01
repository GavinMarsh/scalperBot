public class Heartbeat implements Runnable {

    // Method sends show server up message to Telegram
    public void run() {
        Bot botObject = new Bot();
        botObject.sendMsg("566251065", "\uD83E\uDD16 choose your settings");
        try {
            Thread.sleep(3600000); //sleep for 60 minutes
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        while (true) {
            botObject.sendMsg("566251065", "\uD83E\uDD16 online");

            try {
                Thread.sleep(3600000); //sleep for 60 minutes
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}