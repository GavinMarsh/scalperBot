public class Settings {

    /*Class variables*/
    static public Boolean active = true; //is the bot active.
    static public Boolean sleep = false; //is the bot asleep.
    static public String symbol = "XBT-USD"; //user defined symbol.
    static public Integer fixedQty = 0; //user defined fixed order quantity.
    static public Integer buyQty = 0; //user defined buy order quantity.
    static public Integer sellQty = 0; //user defined sell order quantity.

    /**
     * Getter Method for Bot activation.
     */
    public static Boolean getActive() {
        return active;
    }

    /**
     * Setter Method for Bot activation.
     */
    public static void setActive(Boolean userActivate) {
        active = userActivate;
    }

    /**
     * Getter Method for Bot sleep.
     */
    public static Boolean getSleep() {
        return sleep;
    }

    /**
     * Setter Method for Bot sleep.
     */
    public static void setSleep(Boolean userSleep) {
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
    public static Integer getFixedQty() {
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
    public static Integer getBuyQty() {
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
    public static Integer getSellQty() {
        return sellQty;
    }

    /**
     * Setter Method for sell order quantity.
     */
    public static void setSellQty(Integer userSellQty) {
        sellQty = userSellQty;
    }
}