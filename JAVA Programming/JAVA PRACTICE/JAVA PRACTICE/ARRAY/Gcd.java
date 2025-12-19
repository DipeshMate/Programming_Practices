
public class Gcd {

    static int Hcf(int m, int n) {
        while (m != n) {
            if (m > n)
                m = m - n;
            else
                n = n - m;
        }
        return m;

    }

    public static void main(String[] args) {
        int m = 25, n = 15;
        Hcf(m, n);
        System.out.println(Hcf(m, n) + " is greatest common divisor");

    }
}
