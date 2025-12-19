import java.util.Scanner;

public class demo3 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter decimal:- ");

        int a = sc.nextInt();
        int c = 0, d = 0;
        for (int i = 31; i >= 0; i--) {
            if (((1 << i) & a) > 0) {
                c++;
                System.out.print(1);
            } else if (((1 << i) & a) == 0) {
                d++;
                System.out.print(0);
            }
        }
        System.out.println();
        System.out.println("No of Set Bit:- " + c);
        System.out.println("No. of Unset Bit :- " + d);

        sc.close();

    }
}
