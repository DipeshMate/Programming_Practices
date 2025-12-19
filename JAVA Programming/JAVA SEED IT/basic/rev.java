import java.util.Scanner;

class rev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int temp;
        int x[] = new int[3];
        System.out.println("Enter no.");
        for (int i = 0; i < 3; i++) {
            x[i] = sc.nextInt();
        }

        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                temp = x[j];
                x[j] = x[i];
                x[i] = temp;
            }
            System.out.println(x[i]);

        }
    }
}
