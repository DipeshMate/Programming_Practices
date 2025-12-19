import java.util.Scanner;

//maximum
public class o {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int x[][] = new int[3][3];

        System.out.print("Enter two Matrix values-");
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
            }
        }

        int max = Integer.MIN_VALUE;

        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x.length; j++) {
                if (x[i][j] > max) {
                    max = x[i][j];
                }

            }
        }
        System.out.println(max);
        sc.close();
    }
}
