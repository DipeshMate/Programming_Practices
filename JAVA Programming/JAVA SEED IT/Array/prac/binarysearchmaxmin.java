import java.util.Scanner;

public class binarysearchmaxmin {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter No of Array:- ");
        int y = sc.nextInt();
        int[] a = new int[y];

        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }

        System.out.print("Enter No. to be Search:- ");
        int num = sc.nextInt();

        int mid, b = 0, e = a.length - 1;
        for (int i = 0; i < a.length; i++) {
            mid = (b + e) / 2;
            if (a[mid] == num) {
                System.out.println(mid + " in an Array");
                break;
            } else if (a[mid] < num) {
                b = mid + 1;
            } else {
                e = mid - 1;
            }

            // if (a[mid - 1] > mid) {
            // System.out.println(a[mid] + " is min");
            // }
            // if (a[mid + 1] > mid) {
            // System.out.println(a[mid] + " is max");
            // }

        }
        if (b > e) {
            System.out.println("Not Found ");
        }

        sc.close();
    }
}
