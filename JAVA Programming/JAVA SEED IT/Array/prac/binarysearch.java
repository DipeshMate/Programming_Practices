import java.util.Scanner;

class binarysearch {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        System.out.println("Enter Binary Sorted Row:- ");
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter no to be Search:- ");
        int num = sc.nextInt();
        int e = 4, b = 0, m;

        while (b <= e) {
            m = (b + e) / 2;

            if (a[m] == num) {
                System.out.println("no. is in " + m + " of array");
                break;
            } else if (a[m] < num) {
                b = m + 1;
            } else {
                e = m - 1;
            }
        }
        if (b > e) {
            System.out.println("Not Found");
        }

        sc.close();
    }

}
