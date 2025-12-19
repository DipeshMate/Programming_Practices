import java.util.Scanner;

// The smallest numbers which are sums of any single positive power of their digits are 1, 2, 3, 4, 5, 6, 7, 8, 9, 
//153, 370, 371, 407, 1634, 4150, 4151, 8208, 9474,
//371 is a armstrong no...!!!
class armstrongno {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int m, a, sum = 0, n;
            System.out.print("Enter any three digit:- ");
            n = sc.nextInt();
            m = n;

            while (n != 0) {
                a = n % 10;
                // System.out.println(a);

                sum = sum + (a * a * a);
                // System.out.println(sum);

                n = n / 10;
                // System.out.println(n);

            }
            // System.out.println(sum);
            if (m == sum) {
                System.out.println(+m);
            } else
                System.out.print("Invalid no");

        }

    }
}
// while(n!=0){
// a=n%10;
// sum=sum+(a*a*a);
// n=n/10;
// }
// printf("%d",sum);
// if(m==sum)
// {
// printf("\n%d is a Armstrong number",m);
// }
// else{
// printf("\n%d is not a Armstrong number",m);
// }