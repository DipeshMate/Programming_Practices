import java.util.Scanner;

public class percantage1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        float m1, m2, m3, t, p;
        m1 = sc.nextFloat();
        m2 = sc.nextFloat();
        m3 = sc.nextFloat();

        t = m1 + m2 + m3;
        p = t / 300 * 100;

        if (p >= 75 && p <= 100) {
            System.out.println(+p + " Grade A Student Pass");
        } else if (p >= 45 && p <= 75) {
            System.out.println(+p + " Grade B Student Pass");
        } else if (p >= 25 && p <= 45) {
            System.out.println(+p + " Grade C Student Pass");
        } else
            System.out.print("Failed");
        sc.close();
    }
}
