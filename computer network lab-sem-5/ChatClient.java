import java.io.*;
import java.net.*;

public class ChatClient {
    public static final String HOST = "127.0.0.1";  // Server address
    public static final int PORT = 12345;           // Server port

    public static void main(String[] args) {
        try (Socket socket = new Socket(HOST, PORT);
             BufferedReader reader = new BufferedReader(new InputStreamReader(socket.getInputStream()));
             PrintWriter writer = new PrintWriter(socket.getOutputStream(), true);
             BufferedReader consoleReader = new BufferedReader(new InputStreamReader(System.in))) {

            System.out.println("Connected to server at " + HOST + ":" + PORT);

            // Send messages to the server
            while (true) {
                System.out.print("You: ");
                String message = consoleReader.readLine();
                writer.println(message);

                // Receive and print server's response
                String serverMessage = reader.readLine();
                System.out.println("Server: " + serverMessage);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
