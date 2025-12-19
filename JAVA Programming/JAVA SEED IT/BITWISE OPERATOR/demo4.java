import java.util.Scanner;

class demo4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Decimal:- ");
        int a = sc.nextInt();
        int r = 0, set = 0, unset = 0;
        boolean status = false;

        for (int i = 31; i >= 0; i--) {
            r = (1 << i) & a;
            if (r > 0) {
                status = true;
                System.out.println(status);
                // set++;
                // System.out.print(i + 1);
                // break;
            }
            if (status == true) {
                if (r == 0) {
                    unset++;
                } else
                    set++;
            }
        }
        System.out.println();
        System.out.println("No of Set Bit:- " + set);
        System.out.println("No. of Unset Bit:- " + unset);
        sc.close();
    }
}