import java.util.Scanner;

public class Solution11 {

    public static int mod = 1000000007;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0;
        int b = 1;
        int n = sc.nextInt();
        int res = 0;
        if (n == 1 || n == 0) {
            while (n > 1) {
                res = (a % mod + b % mod) % mod;
                a = b;
                b = res;
                n--;
            }

        }
    }

}
