import org.telegram.telegrambots.bots.TelegramLongPollingBot;
import org.telegram.telegrambots.meta.api.objects.Update;

public class Bot extends TelegramLongPollingBot {


    public void onUpdateReceived(Update update) {

        System.out.print(update.getMessage().getText());
    }

    public String getBotUsername() {
        return "ScalperTelegramBot";
    }

    public String getBotToken() {
        return "1364754722:AAHqxkoB2NH6jRq2Uxky4Rbq0mJHs-i-DQ0";
    }
}
