
// import java.util.Arrays;
import java.util.Scanner;

class sortrev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter no. ");

        int N = sc.nextInt();
        int x[] = new int[N];
        int swap;

        for (int i = 0; i < N; i++) {
            x[i] = sc.nextInt();
        }

        for (int i = 0; i < N; i++) {

            for (int j = i + 1; j < N; j++) {

                {
                    swap = x[j];
                    x[j] = x[i];
                    x[i] = swap;

                }
            }

            System.out.println(x[i]);
        }

        // Arrays.sort(x);
        // for (int i = 0; i < args.length; i++) {
        // System.out.println(x[i]);
        // }

    }

}
