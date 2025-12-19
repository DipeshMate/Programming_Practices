import java.util.Scanner;

public class c {
    public static void main(String[] args) {
        int n, row, col, sp;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        n = sc.nextInt();
        for (row = 1; row <= n; row++) {
            for (sp = 1; sp <= n - row; sp++) {
                System.out.print(" ");
            }
            for (col = 1; col <= 2 * row - 1; col++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (row = n; row >= 1; row--) {
            for (sp = 1; sp <= n - row; sp++) {
                System.out.print(" ");
            }
            for (col = 1; col <= 2 * row - 1; col++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }

}
