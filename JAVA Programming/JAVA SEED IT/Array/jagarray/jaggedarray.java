package jagarray;

import java.util.Scanner;

class jaggedarray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[][] = new int[3][];
        x[0] = new int[2];
        x[1] = new int[4];
        x[2] = new int[3];
        int i, j, sum = 0;

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.println("Enter no. ");
                x[i][j] = sc.nextInt();

            }
        }
        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                sum += x[i][j];
                System.out.println(x[i][j] + "\t");

            }
            System.out.println(sum);
            sum = 0;
        }
    }
}
