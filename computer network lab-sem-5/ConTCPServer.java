import java.io.*;
import java.net.*;

public class ConTCPServer {
    public static void main(String[] args) {
        final int PORT = 9999; // Port number for communication

        try (ServerSocket serverSocket = new ServerSocket(PORT)) {
            System.out.println("Server is running on port " + PORT);

            // Continuously accept client connections
            while (true) {
                Socket clientSocket = serverSocket.accept();
                System.out.println("New client connected: " + clientSocket.getInetAddress());

                // Handle client communication in a new thread
                new ClientHandler(clientSocket).start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

// ClientHandler class to handle communication with a single client
class ClientHandler extends Thread {
    private Socket clientSocket;

    public ClientHandler(Socket socket) {
        this.clientSocket = socket;
    }

    @Override
    public void run() {
        try (BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
             PrintWriter out = new PrintWriter(clientSocket.getOutputStream(), true)) {

            String message;
            // Communication loop
            while ((message = in.readLine()) != null) {
                System.out.println("Received from client: " + message);

                // Respond to the client
                out.println("Server: " + message);

                // Exit condition
                if (message.equalsIgnoreCase("exit")) {
                    System.out.println("Client disconnected: " + clientSocket.getInetAddress());
                    break;
                }
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
