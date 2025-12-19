import java.util.*;

public class kkkk {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("=".repeat(32));
        for (int i = 0; i < 3; i++) {
            String s1 = sc.next();
            int x = sc.nextInt(); // Complete this line
            if (x < 100 && x >= 10) {
                System.out.printf("%-15s0", s1);

            } else if (x < 10) {
                System.out.printf("%-15s00", s1);
            } else {
                System.out.printf("%-15s", s1);
            }
            System.out.println(x);

        }
        System.out.println("=".repeat(32));

    }
}
