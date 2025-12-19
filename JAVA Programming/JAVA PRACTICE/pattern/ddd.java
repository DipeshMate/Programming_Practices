import java.util.Scanner;

public class ddd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;

        for (int i = 1; i <= (2 * n - 1); i++) {

            for (int j = 1; j <= (2 * n - 1); j++) {

                if (i == 1 || i == (2 * n - 1))

                    System.out.print(n + " ");

                else {

                    if (i > n)

                        count--;

                    else

                        count++;

                    for (int k = 1; k <= count; k++)

                        System.out.print((n - k + 1) + " ");

                    for (int k = 1; k <= (2 * (n - count) - 1); k++)

                        System.out.print(i < n ? (n - i + 1) : (i - n + 1) + " ");

                    for (int k = count; k >= 1; k--)
                        System.out.print(n - k + 1 + " ");

                }

            }

            System.out.println();

        }

    }
}
