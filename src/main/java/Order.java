public class Order {

    // Instance variables
    int size;
    String direction;
    double ask;

    /**
     * Getter Method for current symbol ask.
     */
    public static double getAsk() {
        return 10.0;
    }

    /**
     * Method for placing an order.
     */
    public void placeOrder(String signalDirection) {
        size = Settings.getFixedQty();
        direction = signalDirection;
        ask = getAsk();


    }
}
