import java.net.*;
import java.util.Scanner;

public class CalculatorClient {
    public static final String SERVER_ADDRESS = "127.0.0.1";  // Server address (localhost)
    public static final int SERVER_PORT = 12345;              // Server port

    public static void main(String[] args) {
        try (DatagramSocket socket = new DatagramSocket()) {
            Scanner scanner = new Scanner(System.in);

            while (true) {
                // Get the arithmetic expression from the user
                System.out.print("Enter arithmetic expression (e.g., 5 + 3) or 'exit' to quit: ");
                String expression = scanner.nextLine();

                if (expression.equalsIgnoreCase("exit")) {
                    break;
                }

                // Send the request to the server
                byte[] requestData = expression.getBytes();
                DatagramPacket requestPacket = new DatagramPacket(requestData, requestData.length, 
                        InetAddress.getByName(SERVER_ADDRESS), SERVER_PORT);
                socket.send(requestPacket);
                System.out.println("Sent request: " + expression);

                // Prepare buffer to receive the server's response
                byte[] receiveBuffer = new byte[1024];
                DatagramPacket responsePacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);

                // Receive the result from the server
                socket.receive(responsePacket);
                String result = new String(responsePacket.getData(), 0, responsePacket.getLength());

                // Display the result
                System.out.println("Result from server: " + result);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
