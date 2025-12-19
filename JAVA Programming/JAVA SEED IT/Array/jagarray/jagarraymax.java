package jagarray;

import java.util.Scanner;

class jagarraymax {
    public static void main(String[] argu) {

        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter no. of rows:- ");
            int x[][] = new int[sc.nextInt()][];
            int i, j, max;

            for (i = 0; i < x.length; i++) {
                System.out.print("Enter no. of columns:- ");
                x[i] = new int[sc.nextInt()];
            }
            for (i = 0; i < x.length; i++) {
                for (j = 0; j < x[i].length; j++) {
                    x[i][j] = sc.nextInt();
                }
            }

            max = 0;
            for (i = 0; i < x.length; i++) {
                for (j = 0; j < x[i].length; j++) {
                    if (max < x[i][j]) {
                        max = x[i][j];
                    }
                    System.out.print(x[i][j] + "\t");
                }
                System.out.print(max + " is Max");
                System.out.println();
            }

        }
    }
}
