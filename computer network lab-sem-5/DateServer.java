import java.net.*;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DateServer {
    public static final int PORT = 12345;  // Port to send the date

    public static void main(String[] args) {
        try (DatagramSocket socket = new DatagramSocket(PORT)) {
            System.out.println("Date Server is running on port " + PORT);

            // Infinite loop to handle client requests
            while (true) {
                // Create a buffer to receive the incoming request
                byte[] receiveBuffer = new byte[1024];
                DatagramPacket requestPacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);

                // Receive the request from the client
                socket.receive(requestPacket);
                System.out.println("Request received from client: " + requestPacket.getAddress());

                // Get the current date and time
                String currentDate = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss").format(new Date());

                // Convert the date to bytes
                byte[] dateBytes = currentDate.getBytes();

                // Send the date back to the client
                DatagramPacket responsePacket = new DatagramPacket(dateBytes, dateBytes.length, 
                                                                    requestPacket.getAddress(), requestPacket.getPort());
                socket.send(responsePacket);
                System.out.println("Sent date to client: " + currentDate);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
