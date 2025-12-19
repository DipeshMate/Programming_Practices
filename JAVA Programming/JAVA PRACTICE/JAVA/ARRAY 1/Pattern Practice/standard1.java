
public class standard1 {

    public static void main(String[] args) {

        java.util.Scanner sc = new java.util.Scanner(System.in);

        int n = sc.nextInt();
        int i = 1;
        while (i <= n) {
            int j = 1;
            while (j <= i) {
                System.out.print(j);
                j++;
            }
            System.out.println();
            i++;
        }

        sc.close();

    }
}