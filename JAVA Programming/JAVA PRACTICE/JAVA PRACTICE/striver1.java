
public class striver1 {
    public static void main(String[] args) {
        

        
        //largest element in an array
        // int arr[]={1,2,0,8,1,4,3};
        // int n = arr.length;
        // int max = 0;

        // for (int i = 0; i < n; i++) {
        //         if(arr[i]>max)
        //         {
        //             max = arr[i];
        //         }
            

        //     }
        //     System.out.println(max);


// second largest element in ana array      

// int arr1[]= {7,7,6,7,7};
// int n = arr1.length;
// int largest=0,secondLargest = -1;

// for (int i = 0; i < n; i++) {
        
//         if(arr1[i]>largest)
//         {
//             largest = arr1[i];
//         }
// }

// for (int i = n-1; i >=0; i--) {
//     if(arr1[i] != largest && arr1[i] > secondLargest )
//     {
//         secondLargest = arr1[i];
//         break;
//     }
// }
// System.out.println(secondLargest);



//remove duplicate element

int arr[] = {1,1,2,2,2,3,3,3};
int n = arr.length;

int count = 0;
for (int i = 1; i < n; i++) {
    if(arr[i] != arr[count])
    {
        arr[count+1]=arr[i];
        count++;
    }
}

System.out.println(count+1);

    }
}
