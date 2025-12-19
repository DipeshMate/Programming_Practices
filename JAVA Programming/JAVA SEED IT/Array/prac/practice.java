import java.util.Scanner;

class practice {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of rows n column:- ");
        int x[][] = new int[sc.nextInt()][sc.nextInt()];
        int y[][] = new int[sc.nextInt()][sc.nextInt()];
        int c[][] = new int[3][3];

        System.out.println("enter for 1st matrix & second matrix ");
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
                c[i][j] = x[i][j] + y[i][j];
            }
        }
        for (int i = 0; i < y.length; i++) {
            for (int j = 0; j < y[i].length; j++) {
                y[i][j] = sc.nextInt();
                c[i][j] = x[i][j] + y[i][j];
            }
        }
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                System.out.print(c[i][j] + "[" + i + "]" + "[" + j + "]");
            }
            System.out.println();
        }
        sc.close();
    }
}