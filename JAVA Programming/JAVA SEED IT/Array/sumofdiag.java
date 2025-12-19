import java.util.Scanner;

class sumofdiag {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[][] = new int[3][3];
        int i, j, sum1 = 0, sum2 = 0;

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print("Enter no. ");
                x[i][j] = sc.nextInt();
            }
        }

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                if (x[i][j] == x[j][i]) {
                    System.out.print(x[i][j] + "[" + i + "]" + "[" + j + "]");
                    sum1 += x[i][j];
                }
                if (i + j == 2) {
                    System.out.print(x[i][j] + "[" + i + "]" + "[" + j + "]");
                    sum2 += x[i][j];
                }

            }
            System.out.println();
        }
        System.out.println("Sum of left Diagonal " + sum1);
        System.out.println("Sum of right Diagonal " + sum2);

        // if (j == i)

        // if(i==n-j-1){
        // 			npd=npd+a[i][j];
        // 		}

        // for (i = 0; i < x.length; i++) {
        // for (j = 0; j < x[i].length; j++) {
        // if (i + j == 2) {
        // System.out.print(x[i][j] + "[" + i + "]" + "[" + j + "]");
        // sum2 += x[i][j];
        // }
        // }
        // System.out.println();

        // }
        // System.out.println(sum2);

        sc.close();
    }
}
