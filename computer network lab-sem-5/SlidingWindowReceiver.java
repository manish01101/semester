import java.util.*;

public class SlidingWindowReceiver {
    private static final int MAX_FRAMES = 10;   // Total number of frames to receive

    public static void main(String[] args) {
        LinkedList<Integer> receivedFrames = new LinkedList<>();

        // Simulating the receiver receiving frames
        for (int i = 0; i < MAX_FRAMES; i++) {
            receivedFrames.add(i);
            System.out.println("Receiver: Frame " + i + " received.");
            // Simulating acknowledgment for each frame
            System.out.println("Receiver: Sending ACK for frame " + i);
        }
    }
}
