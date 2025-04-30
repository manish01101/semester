import java.net.*;

public class CalculatorServer {
    public static final int PORT = 12345;  // Port to listen for client requests

    public static void main(String[] args) {
        try (DatagramSocket socket = new DatagramSocket(PORT)) {
            System.out.println("Calculator Server is running on port " + PORT);

            while (true) {
                // Prepare buffer for receiving request data from client
                byte[] receiveBuffer = new byte[1024];
                DatagramPacket requestPacket = new DatagramPacket(receiveBuffer, receiveBuffer.length);

                // Receive the request from the client
                socket.receive(requestPacket);
                String clientRequest = new String(requestPacket.getData(), 0, requestPacket.getLength());
                System.out.println("Received request: " + clientRequest);

                // Perform the calculation based on the client request
                String result = performCalculation(clientRequest);

                // Send the result back to the client
                byte[] resultBytes = result.getBytes();
                DatagramPacket responsePacket = new DatagramPacket(resultBytes, resultBytes.length, 
                        requestPacket.getAddress(), requestPacket.getPort());
                socket.send(responsePacket);
                System.out.println("Sent result: " + result);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // Method to perform calculation based on the client request
    private static String performCalculation(String request) {
        String[] parts = request.split(" ");
        if (parts.length != 3) {
            return "Invalid request format";
        }

        try {
            double num1 = Double.parseDouble(parts[0]);
            String operator = parts[1];
            double num2 = Double.parseDouble(parts[2]);

            switch (operator) {
                case "+":
                    return String.valueOf(num1 + num2);
                case "-":
                    return String.valueOf(num1 - num2);
                case "*":
                    return String.valueOf(num1 * num2);
                case "/":
                    if (num2 == 0) {
                        return "Error: Division by zero";
                    }
                    return String.valueOf(num1 / num2);
                default:
                    return "Invalid operator";
            }
        } catch (NumberFormatException e) {
            return "Invalid numbers";
        }
    }
}
