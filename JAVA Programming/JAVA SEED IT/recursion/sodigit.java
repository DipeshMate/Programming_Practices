import java.rmi.server.ObjID;

class sodigit {

    // static int s = 0;
    // static int b;

    // static void sumofdigit(int n) {
    // if (n != 0) {
    // b = n % 10;
    // s = s + b;
    // System.out.println(b);
    // sumofdigit(n / 10);
    // }
    // }

    // public static void main(String[] args) {
    // sumofdigit(485);
    // System.out.print(s);
    // }

    public static void main(String[] args) {

        sodigit r = new sodigit();
        int n = 5;
        int a = r.sum(n);
        System.out.println(a);

    }

    static int sum(int n) {
        if (n > 0) {
            return n + sum(n - 1);
        } else {
            return 0;
        }
    }
}
