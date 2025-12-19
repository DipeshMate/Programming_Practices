import java.util.*;

class Hello {
    
//    static int[] arr = { 5, 9, 21, 11, 17, 3, 30, 12, 25, 50 };
   static int[] arr1 = { 5, 4, 9, 17, 15, 11, 6, 70, 60, 50 };

   public static void main(String[] args) {
       //Approach 1
       // Stack<Integer> st = new Stack<>();
       // int ans[] = new int[arr.length];

       // for (int i = arr.length - 1; i >= 0; i--) {
       //     if (st.size() > 0 && st.peek() < arr[i]) {
       //         st.pop();
       //     }

       //     if (st.isEmpty())
       //         ans[i] = -1;
       //     else
       //         ans[i] = st.peek();

       //     st.push(arr[i]);
       // }
       // for (int i = 0; i < ans.length; i++) {
       //  System.out.print(ans[i]+" ");   
       // }

       //Approach 2
       Stack<Integer> st = new Stack<>();
       int res[] = new int[arr1.length];
       st.push(0);
       for (int i = 1; i < res.length; i++) {
           while (st.size() > 0 && arr1[st.peek()] < arr1[i]) {
               res[st.peek()] = arr1[i];
               st.pop();
           }
           st.push(i);
       }
       while (st.size() > 0) {
           res[st.pop()] = -1;
       }

       for (int i = 0; i < res.length; i++) {
        System.out.print(res[i]+" ");   
       }

}
}