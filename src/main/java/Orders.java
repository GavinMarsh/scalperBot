public class Orders {

    /**
     * Method for placing orders.
     */
    public static void place(String direction) {
        if (direction.equals(">")) {
            // BitMEX limit order to be placed at best price. With a cancel if not filled within 30 minutes.
            // Once order placement confirmed, 'profit-limit-order' at $25 in profit from entry order.
        } else if (direction.equals("<")) {
            // BitMEX limit order to be placed at best price. With a cancel if not filled within 30 minutes.
            // Once order placement confirmed, 'profit-limit-order' at $25 in profit from entry order.
        }
    }

    /**
     * Method for placing orders.
     */
    public static void cancel() {
        //cancel all resting orders
    }

    /**
     * Method for showing resting orders.
     */
    public static void show() {
        //show all resting orders.
    }

    /**
     * Method to show all open positions.
     */
    public static void positions() {
        //show all resting orders.
    }
}
