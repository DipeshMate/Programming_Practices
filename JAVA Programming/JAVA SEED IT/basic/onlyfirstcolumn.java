import java.util.Scanner;

public class onlyfirstcolumn {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[][] = new int[3][3];
        int i, j;

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print("Enter no. ");
                x[i][j] = sc.nextInt();
            }
        }
        for (i = 0; i < x.length; i++) {
            {
                System.out.println(x[i][0] + "[" + i + "]" + "[" + 0 + "]");
            }

        }
    }
}
