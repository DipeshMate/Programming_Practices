public class prime {
    public static void main(String[] args) {
        java.util.Scanner s = new java.util.Scanner(System.in);
        int n = s.nextInt();
        Boolean dividend = false;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                dividend = true;
                break;
            }
        }

        // Boolean dividend = false;
        // int d = 2;
        // while (d < n) {

        // if (n % d == 0) {
        // dividend = true;
        // break;

        // }
        // d++;
        // }
        if (dividend) {
            System.out.println("not prime");
        } else {
            System.out.println("prime");
        }

    }
}