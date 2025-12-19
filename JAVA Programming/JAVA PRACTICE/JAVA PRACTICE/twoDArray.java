import java.util.Scanner;

class twoDArray {

    public static int[][] takeinput(){
        Scanner sc = new Scanner(System.in);
        System.out.print("enter no. of ROws:- ");
        int rows = sc.nextInt();
        System.out.print("enter no. of columns:- ");
        int cols = sc.nextInt();

        int input[][] = new int[rows][cols]; 
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("enter element at "+i+" row " +j+ " column " );
                input[i][j] = sc.nextInt();
            }
        }
        sc.close();
        return input;
    }

    public static int largestRowSum(int a[][]){
        int largest = Integer.MIN_VALUE;
        int sum = 0;

        for (int i = 0; i < a.length; i++) {  
            sum=0;          
            for (int j = 0; j < a[i].length; j++) {
            sum +=a[j][i];     
        }
            if(sum>largest)
            largest = sum;
        }
        return largest;
    }
    public static void print(int a[][]){
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                System.out.print(a[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
       int input[][] = takeinput();
       print(input);
      System.out.println(largestRowSum(input));  

    }
    
}
