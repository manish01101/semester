import java.io.*;
import java.net.*;

public class ChatServer {
    public static final String HOST = "127.0.0.1"; // Localhost
    public static final int PORT = 12345; // Port to bind the server

    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(PORT)) {
            System.out.println("Server started on " + HOST + ":" + PORT);

            // Listen for client connections
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("New client connected: " + clientSocket.getInetAddress());

                // Handle each client connection iteratively
                handleClient(clientSocket);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void handleClient(Socket clientSocket) {
        try (BufferedReader reader = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
                PrintWriter writer = new PrintWriter(clientSocket.getOutputStream(), true)) {

            String clientMessage;
            while ((clientMessage = reader.readLine()) != null) {
                System.out.println("Client: " + clientMessage);

                // Server responds to the client
                BufferedReader consoleReader = new BufferedReader(new InputStreamReader(System.in));
                System.out.print("Server: ");
                String serverMessage = consoleReader.readLine();
                writer.println(serverMessage);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                clientSocket.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
