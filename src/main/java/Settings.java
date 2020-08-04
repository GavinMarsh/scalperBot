
public class Settings{

    // Class variables
    private static boolean active = true; //is the bot active.
    private static boolean sleep = false; //is the bot asleep.
    private static String symbol = "XBT-USD"; //user defined symbol.
    private static int fixedQty = 0; //user defined fixed order quantity.
    private static int buyQty = 0; //user defined buy order quantity.
    private static int sellQty = 0; //user defined sell order quantity.

    /**
     * Getter Method for Bot activation.
     */
    public static boolean getActive() {
        return active;
    }

    /**
     * Setter Method for Bot activation.
     */
    public static void setActive(boolean userActivate) {
        active = userActivate;
    }

    /**
     * Getter Method for Bot sleep.
     */
    public static boolean getSleep() {
        return sleep;
    }

    /**
     * Setter Method for Bot sleep.
     */
    public static void setSleep(boolean userSleep) {
        sleep = userSleep;
    }

    /**
     * Getter Method for Symbol to trade.
     */
    public static String getSymbol() {
        return symbol;
    }

    /**
     * Setter Method for Symbol to trade.
     */
    public static void setSymbol(String userSymbol) {
        symbol = userSymbol;
    }

    /**
     * Getter Method for fixed order quantity.
     */
    public static int getFixedQty() {
        return fixedQty;
    }

    /**
     * Setter Method for order size.
     */
    public static void setFixedQty(Integer userFixedQty) {
        fixedQty = userFixedQty;
    }

    /**
     * Getter Method for buy order quantity.
     */
    public static int getBuyQty() {
        return buyQty;
    }

    /**
     * Setter Method for buy order quantity.
     */
    public static void setBuyQty(Integer userBuyQty) {
        buyQty = userBuyQty;
    }

    /**
     * Getter Method for sell order quantity.
     */
    public static int getSellQty() {
        return sellQty;
    }

    /**
     * Setter Method for sell order quantity.
     */
    public static void setSellQty(Integer userSellQty) {
        sellQty = userSellQty;
    }

    public static void command() {
    }
}