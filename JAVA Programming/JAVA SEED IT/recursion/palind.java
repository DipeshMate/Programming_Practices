
class palind {

    static int s = 0;
    static int b;

    static void palindrome(int n) {
        if (n != 0) {
            b = n % 10;
            s = s * 10 + b;
            palindrome(n / 10);
        }
    }

    public static void main(String[] args) {
        palindrome(12321);
        System.out.println(s);
    }
}
