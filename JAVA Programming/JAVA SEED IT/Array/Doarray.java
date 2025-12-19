
import java.util.Scanner;

class Doarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[][] = new int[3][2];
        // column 3 row 2
        int i, j;
        // x.length=3=i
        // x[i].length=2=j/////

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print("Enter no. ");
                x[i][j] = sc.nextInt();
            }
        }
        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print(x[i][j] + "[" + i + "][" + j + "]");
            }
            System.out.println();
        }
    }
}