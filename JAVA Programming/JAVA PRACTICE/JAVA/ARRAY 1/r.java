import java.util.Scanner;

public class r {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x[] = new int[4];
        for (int i = 0; i < x.length; i++) {
            for (int j = i; j < x.length; j++) {
                for (int k = i; k < j; k++) {
                    System.out.println(args[k] + " ");
                }
            }
        }
    }
}
