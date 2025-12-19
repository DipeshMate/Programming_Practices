import java.util.Scanner;

public class tryla1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int length = input.length();
        int count = 1;

        for (int i = 0; i < length - 1; i++) {
            if ((input.charAt(i) == ' ')) {
                count++;
            }
        }
        System.out.println("total words:-" + count);

        sc.close();
    }

}
