// import java.io.*;
// import java.net.*;

// class UDPClient {
//   public static void main(String args[]) throws Exception {
//     BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));
//     DatagramSocket clientSocket = new DatagramSocket();
//     InetAddress IPAddress = InetAddress.getByName("localhost");

//     byte[] sendData = new byte[1024];
//     byte[] receiveData = new byte[1024];

//     String sentence = inFromUser.readLine();
//     sendData = sentence.getBytes();

//     DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, 9876);
//     clientSocket.send(sendPacket);

//     DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
//     clientSocket.receive(receivePacket);

//     String modifiedSentence = new String(receivePacket.getData());
//     System.out.println("FROM SERVER:" + modifiedSentence);
//     clientSocket.close();
//   }
// }

import java.io.*;
import java.net.*;

class UDPClient {
  public static void main(String[] args) throws Exception {
    BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));
    DatagramSocket clientSocket = new DatagramSocket();
    InetAddress IPAddress = InetAddress.getByName("localhost");

    try {
      while (true) {
        byte[] sendData = new byte[1024];
        byte[] receiveData = new byte[1024];

        System.out.print("Enter message: ");
        String sentence = inFromUser.readLine();

        if (sentence.equalsIgnoreCase("exit")) {
          System.out.println("Exiting client...");
          break;
        }

        sendData = sentence.getBytes();
        DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length,
            IPAddress, 9876);
        clientSocket.send(sendPacket);

        DatagramPacket receivePacket = new DatagramPacket(receiveData,
            receiveData.length);
        clientSocket.receive(receivePacket);

        String modifiedSentence = new String(receivePacket.getData(), 0,
            receivePacket.getLength());
        System.out.println("FROM SERVER: " + modifiedSentence);
      }
    } finally {
      clientSocket.close();
    }
  }
}
