import java.io.*;
import java.net.*;

public class ConTCPClient {
    public static void main(String[] args) {
        try (Socket socket = new Socket("localhost", 9999);
             BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
             PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
             BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in))) {

            System.out.println("Connected to the server. Type your messages:");

            String message;
            while (true) {
                // Read user input and send to server
                System.out.print("Client: ");
                message = userInput.readLine();
                out.println(message);

                // Receive server response
                String response = in.readLine();
                System.out.println("Server: " + response);

                // Exit if the user types "exit"
                if (message.equalsIgnoreCase("exit")) {
                    System.out.println("Connection closed.");
                    break;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
