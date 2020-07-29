public class heartbeat implements Runnable{

    public void run() {
        while (true) {
            System.out.println("working master :pray:");
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}