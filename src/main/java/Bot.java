import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.objects.Update;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Bot extends TelegramLongPollingBot {


    public void onUpdateReceived(Update update) {   //process incoming message
        String msg = update.getMessage().getText();
        String buy = ">";
        String sell = "<";

        if (SignalCheck(msg,buy)) {
            System.out.print("placing buy order"); //hand over to market-maker
        } else if (SignalCheck(msg,sell)) {
            System.out.print("placing sell order");
        }
    }

    public boolean SignalCheck(String msg, String symbol) {
        String validPattern = symbol;
        Pattern pattern = Pattern.compile(validPattern);
        Matcher matcher = pattern.matcher(msg);
        return matcher.find();
    }

    public String getBotUsername() {
        return "ScalperTelegramBot";
    }

    public String getBotToken() {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0"; //change this to read from local file
    }
}
