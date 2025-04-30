// import java.net.*;
// import java.io.*;

// public class Server {
//   public static void main(String[] args) throws Exception {
//     ServerSocket serverSocket = new ServerSocket(2001);
//     System.out.println("Server is listening...");

//     Socket socket = serverSocket.accept();
//     System.out.println("Connected... :)");

//     BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
//     PrintWriter pw = new PrintWriter(socket.getOutputStream());

//     pw.println("Hello Client...");
//     pw.flush();

//     String line = br.readLine();
//     System.out.println("client says: " + line);

//     String msg1 = br.readLine();
//     System.out.println("client says: " + msg1);

//     socket.close();
//     serverSocket.close();
//   }
// }



import java.net.*;
import java.io.*;

public class Server {
  public static void main(String[] args) throws Exception {
    ServerSocket serverSocket = new ServerSocket(2001);
    System.out.println("Server is listening on port 2001...");

    Socket socket = serverSocket.accept();
    System.out.println("Client connected... :)");

    BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
    PrintWriter pw = new PrintWriter(socket.getOutputStream(), true); // Enable auto-flush

    pw.println("Hello Client! Type 'exit' to disconnect.");
    
    try {
      String line;
      while ((line = br.readLine()) != null) {
        if (line.equalsIgnoreCase("exit")) {
          System.out.println("Client disconnected.");
          pw.println("Goodbye!");
          break;
        }
        System.out.println("Client says: " + line);
        pw.println("Server received: " + line); // Echo message back to client
      }
    } finally {
      socket.close();
      serverSocket.close();
      System.out.println("Server socket closed.");
    }
  }
}



// single use

// import java.io.*;
// import java.net.*;

// public class Server {
//     public static void main(String[] args) {
//         // Server port number
//         int port = 12345;

//         try (ServerSocket serverSocket = new ServerSocket(port)) {
//             System.out.println("Server is running and waiting for a connection...");
            
//             // Wait for client connection
//             Socket clientSocket = serverSocket.accept();
//             System.out.println("Client connected!");

//             // Set up input and output streams
//             BufferedReader input = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
//             PrintWriter output = new PrintWriter(clientSocket.getOutputStream(), true);

//             // Read message from client and send a response
//             String clientMessage = input.readLine();
//             System.out.println("Received from client: " + clientMessage);

//             String response = "Hello from server!";
//             output.println(response);

//             // Close resources
//             input.close();
//             output.close();
//             clientSocket.close();

//         } catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }
