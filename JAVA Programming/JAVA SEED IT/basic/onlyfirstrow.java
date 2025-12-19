import java.util.Scanner;

// import java.util.Scanner;
class onlyfirstrow {
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
        for (j = 0; j < x.length; j++) {
            System.out.println(x[0][j] + "[" + 0 + "]" + "[" + j + "]");

        }

    }
}
