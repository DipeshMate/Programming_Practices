import java.util.Scanner;

class jagdarray {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Size of Row ");
            int a[][] = new int[sc.nextInt()][];
            int i, j;

            for (i = 0; i < a.length; i++) {
                System.out.print("Enter no. of column ");
                a[i] = new int[sc.nextInt()];
            }

            for (i = 0; i < a.length; i++) {
                for (j = 0; j < a[i].length; j++) {
                    a[i][j] = sc.nextInt();
                }
            }
            for (i = 0; i < a.length; i++) {
                for (j = 0; j < a[i].length; j++) {
                    System.out.print(a[i][j] + "\t");
                }
                System.out.println();
            }

        }
    }
}
