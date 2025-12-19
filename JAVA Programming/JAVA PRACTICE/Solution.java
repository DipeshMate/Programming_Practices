import java.util.*;

public class Solution {

    public static void reverseArray(ArrayList<Integer> arr, int m) {

        ArrayList<Integer> temp = new ArrayList<>();
        for (int i = 0; i <= m; ++i) {
            temp.add(arr.get(i));
        }

        for (int i = arr.size() - 1; i > m; --i) {
            temp.add(arr.get(i));
        }

        for (int i = 0; i < arr.size(); ++i) {
            arr.set(i, temp.get(i));
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            arr.add(arr.get(i));
        }
        int m = sc.nextInt();
        reverseArray(arr, m);
        sc.close();
    }
}
