import java.util.Scanner;

public class palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int rem, r, m;
        r = 0;
        rem = 0;
        int n = sc.nextInt();

        m = n;

        while (n != 0) {
            rem = n % 10;
            r = r * 10 + rem;
            n = n / 10;
        }

        // System.out.println(r);

        if (m == r) {
            System.out.println(+r + " is a palindrome no.");

        } else if (m != r) {
            System.out.println(+r + " is not a palindrome no.");
        }
        sc.close();
    }
}
