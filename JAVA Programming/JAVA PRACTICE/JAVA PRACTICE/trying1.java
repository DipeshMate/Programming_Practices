import java.util.*;

public class trying1 {

    static int print(int n) {
        int i = 1;
        while (i <= n) {
            i = i + 1;
            print(i + 1);
            System.out.print(i);
        }
        return n;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        print(n);
        System.out.println(n);
        sc.close();

    }
}
