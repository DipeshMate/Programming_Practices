
import java.util.Scanner;

class Minimum {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int x[] = new int[5], i, min;

            for (i = 0; i < x.length; i++) {

                System.out.print("Enter no. ");
                x[i] = sc.nextInt();

            }
            min = x[0];

            for (i = 0; i < x.length; i++) {
                if (x[i] < min) {
                    min = x[i];
                }
            }
            System.out.println(+min + " is Minimum no");

            sc.close();
        }
    }
}
