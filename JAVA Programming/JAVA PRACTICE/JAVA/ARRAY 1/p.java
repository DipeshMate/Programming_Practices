import java.util.Scanner;

public class p {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[][] = new int[2][2];

        System.out.print("Enter two Matrix values-");
        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x[i].length; j++) {
                x[i][j] = sc.nextInt();
            }
        }
        int min = x[0][0];

        for (int i = 0; i < x.length; i++) {
            for (int j = 0; j < x.length; j++) {
                if (x[i][j] < min) {
                    System.out.println("//" + min);
                    min = x[i][j];
                }
            }
        }
        System.out.println(min);
        sc.close();
    }
}