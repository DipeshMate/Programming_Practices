import java.lang.Math;
import java.util.Scanner;

public class nseries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int k = sc.nextInt();
        for (int i = 0; i < k; i++) {

            int a = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();

            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += (Math.pow(2, j));
                System.out.printf("%d ", a + sum * b);
            }
            System.out.println();
        }
        sc.close();
    }
}
