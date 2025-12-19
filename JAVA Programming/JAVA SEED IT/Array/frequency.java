import java.util.Scanner;

class frequency {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[] = new int[4];
        int i, j;
        for (i = 0; i < x.length; i++) {
            x[i] = sc.nextInt();
        }

        for (i = 0; i < x.length; i++) {
            int count = 0;
            for (j = i - 1; j >= 0; j--) {
                if (x[i] == x[j]) {
                    count++;
                    break;
                }
            }

            if (count == 0) {

                count = 0;
                for (j = i; j < x.length; j++) {
                    if (x[i] == x[j]) {
                        count++;
                    }
                }
                System.out.println(x[i] + "  " + count);

            }
        }
        sc.close();
    }
}