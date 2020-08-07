public class ScalperStrategy {

    /**
     * Method to setup Scalper strategy.
     */
    public static void command(String strategy){
        Bot.strategy = strategy;
        Setcontract.command();
    }
}
