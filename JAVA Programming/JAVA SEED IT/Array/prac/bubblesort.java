import java.util.Scanner;

class bubblesort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[] = new int[5];

        System.out.println("Enter Number :- ");

        for (int i = 0; i < x.length; i++) {
            x[i] = sc.nextInt();
        }

        int temp;

        for (int i = 0; i < x.length - 1; i++) {
            for (int j = 0; j < x.length - 1 - i; j++) {

                if (x[j] > x[j + 1]) {
                    temp = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = temp;
                }
            }
        }

        for (int j = 0; j < x.length; j++) {
            System.out.println(x[j + 1]);

        }
        sc.close();
    }
}