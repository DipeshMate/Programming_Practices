import java.util.ArrayList;
import java.util.Arrays;
class justtry {
    public static void main(String[] args) throws Exception{

        int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125};
        ArrayList<Integer>
                list = new ArrayList<Integer>();
                int x = 5;
                int n = arr.length;

        int left = 0;
        int right = n-1;

        while(left<=right){
            if(arr[left]==x && arr[right]==x){
                list.add(0, left);
                list.add(1, right);
                break;
            }
            if(arr[left]!=x) left++;
            if(arr[right]!=x) right--;
        }

        System.out.println(list);
                
    }
}

