public class lol {
    public static void main(String[] args) {
        int n = 1881;
        int rev = 0;
        int temp = n;
        while (temp != 0) {
            int d = temp % 10;
            rev = rev * 10 + d;
            temp = temp / 10;
        }
        if (rev == n) {
            System.out.print(rev);
        }
    }
}
