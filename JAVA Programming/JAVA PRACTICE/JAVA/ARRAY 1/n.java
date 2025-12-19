import java.util.Scanner;

//sum of  first second and third column individual...!!!
public class n {
    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // int x[][] = new int[3][3];

        // System.out.print("Enter No-")

        ;

        // for (int i = 0; i < x.length; i++) {
        // for (int j = 0; j < x[i].length; j++) {
        // x[i][j] = sc.nextInt();
        // }
        // }
        int x[][] = { { 10, 12, 3 }, { -4, 14, 60 }, { 17, -8, 19 } };

        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length - 2; j++) {

                if (x[i][0] >= x[i][0]) {
                    sum1 = sum1 + x[i][0];
                }

                if (x[i][1] >= x[i][1]) {
                    sum2 = sum2 + x[i][1];
                }
                if (x[i][2] >= x[i][2]) {
                    sum3 = sum3 + x[i][2];
                }

            }
        }
        System.out.println("Sum of First column is " + sum1);
        System.out.println("Sum of Second column is " + sum2);
        System.out.println("Sum of Third column is " + sum3);

        // sc.close();
    }

}
