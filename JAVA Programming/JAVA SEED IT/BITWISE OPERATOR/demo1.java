import java.util.Scanner;

public class demo1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Decimal. and get left shift:- ");
        int a = sc.nextInt();
        for (int i = 0; i <= 2; i++) {
            System.out.println(a);
            a = a << 1;
        }
        sc.close();
    }
}
