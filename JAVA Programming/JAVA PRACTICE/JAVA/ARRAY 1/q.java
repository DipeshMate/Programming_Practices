import java.util.Scanner;

public class q {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x[][] = new int[3][n];

        System.out.print("Enter two Matrix values-");
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
            }
        }

        // for (int i = 0; i < x.length; i++) {
        // for (int j = 0; j < x[i].length; j++) {
        // System.out.println(x[i][j]);
        // }
        // }

        sc.close();
    }
}
