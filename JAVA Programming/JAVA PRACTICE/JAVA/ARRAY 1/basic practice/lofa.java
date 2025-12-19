
class lofa{
    public static void main(String[] args) {

        int arr[] ={1,1,0,0,1,1,1,1,1,0};
        int n = arr.length;
        int m = 2;

         int count = 0,start = 0;
        for(int i = 0; i < n; i++)
         {
             if(arr[i]==1)
             {
                 count++;
             }

             while(count > m){
                     if(arr[start] == 0)
                         count--;
                     start++;
                 }
         }
        System.out.print(count);
    }
}