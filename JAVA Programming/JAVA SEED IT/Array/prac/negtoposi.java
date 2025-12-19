// import java.util.Scanner;
// if(n[i]<0){n[i]=-n[i];}  -80, -14 , 15 , 8 , - 9 => output = 80, 14 , 15 , 8 , 9

import java.util.Scanner;

class negtoposi {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int n[] = new int[5];

        // System.out.println("Enter Digits ");
        // for (int i = 0; i < n.length; i++) {
        // n[i] = sc.nextInt();
        // }

        // for (int i = 0; i < n.length; i++) {
        // if (n[i] < 0) {
        // n[i] = -n[i];
        // }
        // System.out.println(n[i]);
        // }

        // 2- get enter two digit n find first digit sum..!!?
        // sum = sum + (a[i] / 10); 15, 14 , 26 , 15 , sum = 5

        // int sum = 0;
        // int a[] = new int[6];

        // for (int i = 0; i < a.length; i++) {
        // a[i] = sc.nextInt();
        // }

        // for (int i = 0; i < a.length; i++) {
        // sum = sum + (a[i] / 10);
        // }
        // System.out.println(sum);

        // 3- enter 3 digits no. n get high digits sum...!!

        // int sum = 0, max, a, b, c;
        // int x[] = new int[5];

        // System.out.println("Enter Digits ");
        // for (int i = 0; i < x.length; i++) {
        // x[i] = sc.nextInt();
        // }
        // for (int i = 0; i < x.length; i++) {
        // a = x[i] % 10;
        // b = (x[i] / 10) % 10;
        // c = x[i] / 100;
        // max = a > b && b > c ? a : b > c ? b : c;
        // System.out.println(max);
        // sum = sum + max;
        // }
        // System.out.println(sum);

        int e = 0, k = 0;
        System.out.println("Enter No. ");
        int y = sc.nextInt();
        int x[] = new int[y];

        for (int i = 0; i < x.length; i++) {
            x[i] = sc.nextInt();
        }

        for (int i = 0; i < x.length; i++) {
            if (x[i] % 2 == 0) {
                e++;
                System.out.println("EVEN");
            } else {
                k++;
                System.out.println("ODD");
            }

            if (e > k) {
                System.out.println("Even");
            } else {
                System.out.println("Odd");
            }

        }
        sc.close();
    }
}
