
using Discord;
using Discord.WebSocket;

public class Program
{
    public static Task Main(string[] args) => new Program().MainAsync();


    public async Task MainAsync()
    {
        var _client = new DiscordSocketClient();

        _client.Log += Log;

        //  You can assign your bot token to a string, and pass that in to connect.
        //  This is, however, insecure, particularly if you plan to have your code hosted in a public repository.
        var token = "MTA2MTU2MDUwMzU0MzAyMTU5OQ.GifPDT.7kPlS8DTUBXqOXib2kwqMw22zgw1Lf_3SEpA3U";

        // Some alternative options would be to keep your token in an Environment Variable or a standalone file.
        // var token = Environment.GetEnvironmentVariable("NameOfYourEnvironmentVariable");
        // var token = File.ReadAllText("token.txt");
        // var token = JsonConvert.DeserializeObject<AConfigurationClass>(File.ReadAllText("config.json")).Token;

        await _client.LoginAsync(TokenType.Bot, token);
        await _client.StartAsync();

        // Block this task until the program is closed.
        await Task.Delay(-1);
    }

    private Task Log(LogMessage msg)
    {
        Console.WriteLine(msg.ToString());
        return Task.CompletedTask;
    }
}