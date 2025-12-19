import java.util.Scanner;

public class max {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a[] = new int[10];
        // System.out.println("Enter no:-");
        // for (int i = 0; i < a.length; i++) {
        //     a[i] = sc.nextInt();
        // }
        // int max = a[0];
        // for (int i = 0; i < a.length; i++) {
        //     if (a[i] > max)
        //         max = a[i];
        // }
        // System.out.println(max + " is maximum");

        a[1] = 1;
        a[3] = 3;
        a[4] = 4;
        a[6] = 6;
        a[8] = 8;
        for (int j = 0; j < a.length; j++) {
            System.out.print(a[j]+" ");
            
        }
        System.out.println();

        char b[] = new char[9];

        b[1]='g';
        b[2]='a';
        b[4]='n';
        b[6]='g';
        b[8]='u';

        for (char c : b) {
            System.out.println(c);
        }
        sc.close();
    }
}
