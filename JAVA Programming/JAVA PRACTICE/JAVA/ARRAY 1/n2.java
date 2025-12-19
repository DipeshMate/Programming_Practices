// import java.util.Scanner;

class n2 {
    public static void main(String[] args) {
        int x[][] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        int sum1[] = new int[3];
        int sum2[] = new int[3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                sum1[i] = sum1[i] + x[i][j];
                sum2[i] = sum2[i] + x[j][i];
            }
        }
        for (int i = 0; i < 3; i++) {
            System.out.println(sum1[i]);
        }
        System.out.println();
        for (int i = 0; i < 3; i++) {
            System.out.println(sum2[i]);
        }

    }
}