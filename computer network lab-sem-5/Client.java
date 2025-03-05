// import java.net.*;
// import java.io.*;

// public class Client {
//   public static void main(String[] args) throws Exception {
//     Socket socket = new Socket("localhost", 2001);
//     System.out.println("Got connected...");

//     BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));

//     PrintWriter pw = new PrintWriter(socket.getOutputStream());

//     String msg1 = br.readLine();
//     System.out.println("server says: " + msg1);

//     pw.println("Hello Server");
//     pw.flush();

//     BufferedReader br1 = new BufferedReader(new InputStreamReader(System.in));
//     String msg = br1.readLine();

//     pw.println(msg);
//     pw.flush();

//     socket.close();
//   }
// }

import java.net.*;
import java.io.*;

public class Client {
  public static void main(String[] args) throws Exception {
    Socket socket = new Socket("localhost", 2001);
    System.out.println("Connected to the server...");

    BufferedReader serverInput = new BufferedReader(new InputStreamReader(socket.getInputStream()));
    PrintWriter pw = new PrintWriter(socket.getOutputStream(), true); // Enable auto-flush
    BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));

    // Read and print the initial message from the server
    String serverMessage = serverInput.readLine();
    System.out.println("Server says: " + serverMessage);

    System.out.println("Type 'exit' to disconnect from server.");
    try {
      while (true) {
        System.out.print("You: ");
        String clientMessage = userInput.readLine();

        if (clientMessage.equalsIgnoreCase("exit")) {
          pw.println(clientMessage); // Send the exit message to the server
          System.out.println("Disconnected from the server.");
          break;
        }

        pw.println(clientMessage); // Send the message to the server

        // Receive and print the server's response
        String serverResponse = serverInput.readLine();
        System.out.println("Server says: " + serverResponse);
      }
    } finally {
      socket.close();
      System.out.println("Socket closed.");
    }
  }
}



// single use

// import java.io.*;
// import java.net.*;

// public class Client {
//     public static void main(String[] args) {
//         // Server IP address and port number
//         String serverAddress = "localhost";
//         int port = 12345;

//         try (Socket socket = new Socket(serverAddress, port)) {
//             // Set up input and output streams
//             BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
//             BufferedReader serverInput = new BufferedReader(new InputStreamReader(socket.getInputStream()));
//             PrintWriter serverOutput = new PrintWriter(socket.getOutputStream(), true);

//             // Send a message to the server
//             System.out.println("Enter message to send to server:");
//             String message = userInput.readLine();
//             serverOutput.println(message);

//             // Receive response from the server
//             String response = serverInput.readLine();
//             System.out.println("Response from server: " + response);

//             // Close resources
//             userInput.close();
//             serverInput.close();
//             serverOutput.close();

//         } catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }
