import java.util.Scanner;

public class sumofdiag {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[][] = new int[3][3];

        System.out.println("Enter elements in array:-");
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
            }
        }

        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {

                if (x[i] == x[j]) {
                    sum1 += x[i][j];
                }

                if (i + j == 2) {
                    sum2 += x[i][j];
                }
            }
        }
        System.out.println("sum of left diagonal:- " + sum1);
        System.out.println("sum of right diagonal:-" + sum2);

        sc.close();
    }
}
