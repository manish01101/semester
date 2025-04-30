import java.util.*;

public class SlidingWindowSender {
    private static final int WINDOW_SIZE = 4;   // Window size (the number of frames the sender can send before waiting for acknowledgment)
    private static final int MAX_FRAMES = 10;   // Total number of frames to send

    public static void main(String[] args) {
        LinkedList<Integer> window = new LinkedList<>();
        LinkedList<Integer> ackList = new LinkedList<>(); // Acknowledgments for frames
        int nextSeqNum = 0; // Next sequence number to send

        while (nextSeqNum < MAX_FRAMES) {
            // Sending frames until the window is full
            while (window.size() < WINDOW_SIZE && nextSeqNum < MAX_FRAMES) {
                window.add(nextSeqNum);
                System.out.println("Sender: Sending frame " + nextSeqNum);
                nextSeqNum++;
            }

            // Simulating the process of waiting for acknowledgments
            // In a real-world scenario, this would be done using networking mechanisms
            Scanner scanner = new Scanner(System.in);
            System.out.println("Sender: Enter ACK for frames " + window);
            String ackInput = scanner.nextLine();

            // Acknowledging frames
            for (String ack : ackInput.split(" ")) {
                int ackNum = Integer.parseInt(ack);
                if (window.contains(ackNum)) {
                    System.out.println("Sender: Acknowledgment received for frame " + ackNum);
                    window.removeFirst();  // Slide the window
                }
            }
        }

        System.out.println("Sender: All frames sent and acknowledged.");
    }
}
