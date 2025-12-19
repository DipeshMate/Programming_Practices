import java.util.Scanner;

public class palindroneString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        // String rev = "";
        // for (int i = str.length() - 1; i >= 0; i--) {
        // rev = rev + str.charAt(i);
        // }
        // if (rev.equals(str))
        // System.out.println("1");
        // else
        // System.out.println("0");

        int n = str.length();
        for (int i = 0; i < str.length() / 2; i++) {
            if (str.charAt(i) != str.charAt(n - i - 1)) {
                System.out.println(str.charAt(i));
                break;
            }
        }
        System.out.println("1");

        sc.close();
    }
}
