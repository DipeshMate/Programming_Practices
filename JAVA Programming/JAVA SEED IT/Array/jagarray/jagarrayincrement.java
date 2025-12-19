import java.util.Scanner;

class jagarrayincrement {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter no. of rows:- ");
            int x[][] = new int[sc.nextInt()][];
            int i, j, c = 1;

            for (i = 0; i < x.length; i++) {
                x[i] = new int[i + 1];
            }

            for (i = 0; i < x.length; i++) {
                for (j = 0; j < x[i].length; j++) {
                    x[i][j] = c++;
                }
            }

            for (i = 0; i < x.length; i++) {
                for (j = 0; j < x[i].length; j++) {
                    System.out.print(x[i][j] + "\t");
                }
                System.out.println();
            }

        }
    }

}
