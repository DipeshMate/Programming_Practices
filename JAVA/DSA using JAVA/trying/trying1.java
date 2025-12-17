import java.util.*;

public class trying1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int count1 = 0;
        int count2 = 0;
        int m = 0, k = 0;
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 1) {
                m = count1++;
            }
            if (arr[i] == 0) {
                k = count2++;
            }
        }
        if (m > k) {
            System.out.println("1");
        } else if (k > m) {
            System.out.println("0");
        } else
            System.out.println("either");

    }
}
