import java.util.Scanner;
// number start with 1

class fibona {
    static int c;

    static void fibo(int a, int b, int n) {
        if (n != 0) {
            System.out.println(+a + " " + b);
            c = a + b;
            System.out.println(c);

            fibo(b, c, n - 1);
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the range:- ");
        int n = sc.nextInt();
        fibo(0, 1, n);
        sc.close();
    }
}
