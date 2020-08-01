public class Order extends Bot{

    /*Instance variables*/
    Integer size;
    String direction;
    Double ask;

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
