import java.util.Scanner;

class fibonaci {
    // by loop number starts with zero

    static void fibon(int a, int b, int n) {
        if (n == 1) {
            System.out.println(a);
        } else {
            System.out.println(a);
            System.out.println(b);
        }

        for (int i = 1; i <= n - 2; i++) {
            int c = a + b;
            System.out.println(c);
            a = b;
            b = c;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter No. of Fibonaci Number Starts with 0 :- ");
        int n = sc.nextInt();
        fibon(0, 1, n);
        sc.close();
    }
}
