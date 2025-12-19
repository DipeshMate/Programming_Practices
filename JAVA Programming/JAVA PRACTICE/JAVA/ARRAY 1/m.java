import java.util.Scanner;

//diagonal of a matrix
public class m {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[][] = new int[3][3];

        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                if (x[i] == x[j]) {
                    System.out.println(x[i][j] + "[" + i + "]" + "[" + j + "]");
                }
                if (i + j == 2) {
                    System.out.println(x[i][j] + "[" + i + "]" + "[" + j + "]");
                }
            }
        }
        sc.close();
    }
}
