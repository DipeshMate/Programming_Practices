import java.util.Scanner;

public class updatebit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int oper = sc.nextInt();
        // operation = 1 : set oper = 0 : clear

        // update bit to 1 else update bit to 0

        int n = 5; // 0101 =>> 0111 -> 7
        int pos = 1;

        int bitmask = 1 << pos;

        if (oper == 1) {
            // set
            int newNumber = bitmask | n;
            System.out.println(newNumber);
        } else {
            // clear
            int newBitMask = ~(bitmask);
            int newNumber = newBitMask & n;
            System.out.println(newNumber);
        }
        sc.close();
    }
}
