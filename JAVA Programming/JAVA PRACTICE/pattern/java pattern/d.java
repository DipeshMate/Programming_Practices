import java.util.Scanner;

public class d {
    public static void main(String[] args) {
        System.out.println("Enter a no.:- ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int row = 0; row <= n; row++) {
            for (int sp = 0; sp <= n - row; sp++) {
                System.out.print(" ");
            }
            for (int col = 0; col <= row - 1; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int row = n; row >= 0; row--) {
            for (int sp = 0; sp <= n - row; sp++) {
                System.out.print(" ");
            }
            for (int col = 0; col <= row - 1; col++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        sc.close();
    }
}
