import java.util.Scanner;

public class max {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[] = { 11, 12, 9, 2, 8, 13, 6, 12, 10 };
        int max = x[0];
        int count = 0;

        for (int j = 1; j < x.length; j++) {

            if (max < x[j]) {
                max = x[j];
            }
        }
        for (int i = 0; i < x.length; i++) {
            if (max == x[i])
                count++;
        }
        System.out.println(count);
        sc.close();
    }
}
