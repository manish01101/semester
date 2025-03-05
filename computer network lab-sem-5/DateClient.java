import java.net.*;

public class DateClient {
    public static final String SERVER_ADDRESS = "127.0.0.1";  // Server address (localhost)
    public static final int SERVER_PORT = 12345;              // Server port

    public static void main(String[] args) {
        try (DatagramSocket socket = new DatagramSocket()) {
            // Send an empty request to the server
            byte[] requestData = new byte[1];  // Empty request data
            DatagramPacket requestPacket = new DatagramPacket(requestData, requestData.length, 
                                                                InetAddress.getByName(SERVER_ADDRESS), SERVER_PORT);
            socket.send(requestPacket);
            System.out.println("Request sent to server.");

            // Prepare a buffer to receive the date response
            byte[] receiveBuffer = new byte[1024];
            DatagramPacket responsePacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);

            // Receive the date from the server
            socket.receive(responsePacket);
            String dateFromServer = new String(responsePacket.getData(), 0, responsePacket.getLength());

            // Display the received date
            System.out.println("Current date from server: " + dateFromServer);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
