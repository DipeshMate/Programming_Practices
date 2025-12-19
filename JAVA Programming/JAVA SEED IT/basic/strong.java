import java.util.Scanner;
// A Strong number is a number, where the sum of the factorial of the digits is
// equal to the number itself. 1, 2, 145, and 40585 are some examples of Strong numbers.

public class strong {
    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            int rem, mul, sum = 0, n, m;
            System.out.print("Enter no ");
            n = sc.nextInt();
            m = n;

            while (n != 0) {
                rem = n % 10;
                mul = 1;
                for (int i = 1; i <= rem; i++) {

                    mul = mul * i;
                }
                sum = sum + mul;
                n = n / 10;
            }

            if (m == sum) {
                System.out.println(+m + " is a Strong Number");
            } else
                System.out.println(+m + " is not a Strong Number");
        }
    }
}