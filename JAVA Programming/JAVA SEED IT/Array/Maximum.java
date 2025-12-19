import java.util.Scanner;

class Maximum {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int x[] = new int[5], i, max;

            max = x[0];
            for (i = 0; i < x.length; i++) {

                System.out.print("Enter no. ");
                x[i] = sc.nextInt();

            }
            for (i = 0; i < x.length; i++) {
                if (x[i] > max) {
                    max = x[i];
                }
            }
            System.out.println(+max + " is Maximum no");

            sc.close();
        }
    }
}
