
import java.util.Scanner;

public class CRC {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the data bits
        System.out.print("Enter the data bits: ");
        String dataBits = scanner.nextLine();

        // Input the generator polynomial
        System.out.print("Enter the generator polynomial: ");
        String generator = scanner.nextLine();

        // Append zeros to the data equal to the length of the generator - 1
        String dividend = dataBits + "0".repeat(generator.length() - 1);
        String remainder = calculateCRC(dividend, generator);

        // Display the transmitted data
        String transmittedData = dataBits + remainder;
        System.out.println("Transmitted data: " + transmittedData);

        // Verification
        System.out.print("Enter the received data for verification: ");
        String receivedData = scanner.nextLine();
        String verificationRemainder = calculateCRC(receivedData, generator);

        if (verificationRemainder.equals("0".repeat(generator.length() - 1))) {
            System.out.println("No error in received data.");
        } else {
            System.out.println("Error detected in received data.");
        }

        scanner.close();
    }

    // Method to calculate CRC
    private static String calculateCRC(String dividend, String divisor) {
        int dataLength = dividend.length();
        int divisorLength = divisor.length();
        String temp = dividend.substring(0, divisorLength);

        for (int i = divisorLength; i <= dataLength; i++) {
            if (temp.charAt(0) == '1') {
                temp = xor(temp, divisor) + (i < dataLength ? dividend.charAt(i) : "");
            } else {
                temp = xor(temp, "0".repeat(divisorLength)) + (i < dataLength ? dividend.charAt(i) : "");
            }
            temp = temp.substring(1); // Remove the leading bit
        }

        return temp;
    }

    // XOR operation
    private static String xor(String a, String b) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < a.length(); i++) {
            result.append(a.charAt(i) == b.charAt(i) ? '0' : '1');
        }
        return result.toString();
    }
}