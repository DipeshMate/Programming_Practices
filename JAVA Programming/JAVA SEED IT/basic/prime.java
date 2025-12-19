
import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int i, c = 0, n;
            n = sc.nextInt();

            for (i = 1; i < n; i = i + 1) {
                if (n % i == 0) {
                    // System.out.println(i);
                    c = c + 1;
                }
            }
            System.out.println(+c);

            if (c == 1) {
                System.out.println(+n + " is Prime");
            } else if (c != 1) {
                System.out.println(+n + " is not a Prime");
            }
        }
    }
}
