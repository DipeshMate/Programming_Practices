
import java.util.*;

class subarraySum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of size of array");
        int n = sc.nextInt();
        System.out.println("find the sum of given no");
        int s = sc.nextInt();
        System.out.println("enter elements in array");
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        ArrayList<Integer> result = new ArrayList<>();
        int left = 0, right = 0;
        int sum = 0;
        sum = arr[left];

        while (right < n && left < n) {
            if (sum == s) {
                if ((right + 1) < (left + 1)) { 
                    result.add(-1);
                    System.out.println(result);
                }
                result.add(left + 1);
                result.add(right + 1);
                System.out.println(result);
            }

            else if (sum < s) {
                sum += arr[right];
                right++;

            } else {
                sum -= arr[left];
                left++;
            }

        }
        result.add(-1);
        System.out.println(result);

        sc.close();
    }
}
