import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.methods.send.SendMessage;
import org.telegram.telegrambots.meta.api.objects.Update;
import org.telegram.telegrambots.meta.exceptions.TelegramApiException;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


public class Bot extends TelegramLongPollingBot {

    public void onUpdateReceived(Update update) {   //process incoming message
        String msg = update.getMessage().getText();
        String buy = ">";
        String sell = "<";

        if (SignalCheck(msg,buy)) {
            System.out.print("placing buy order"); //hand over to market-maker
            sendMsg("566251065", "\uD83E\uDD16 placing buy order");
        } else if (SignalCheck(msg,sell)) {
            System.out.print("placing sell order");
            sendMsg("566251065", "\uD83E\uDD16 placing sell order");
        }
    }

    /**
     * Method for checking if message contains a signal.
     */
    public boolean SignalCheck(String msg, String symbol) {
        String validPattern = symbol;
        Pattern pattern = Pattern.compile(validPattern);
        Matcher matcher = pattern.matcher(msg);
        return matcher.find();
    }


    /**
     * Method for creating a message and sending it.
     * @param chatId chat id
     * @param s The String that you want to send as a message.
     */
    public synchronized void sendMsg(String chatId, String s) {

        SendMessage execute = new SendMessage();
        execute.enableMarkdown(true);
        execute.setChatId(chatId);
        execute.setText(s);
        try {
            execute(execute);
        } catch (TelegramApiException e) {
            Logger log = null;
            log.log(Level.SEVERE, "Exception: ", e.toString());
        }
    }

    /**
     * Returns bot name.
     */
    public String getBotUsername() {
        return "ScalperTelegramBot";
    }

    /**
     * Returns bot token.
     */
    public String getBotToken() {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0"; //change this to read from local file
    }
}
