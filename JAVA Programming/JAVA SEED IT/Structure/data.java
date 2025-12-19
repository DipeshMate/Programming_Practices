
import java.util.Scanner;

class data2 {
    int a, b;

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int i;
            data2[] d = new data2[5];

            for (i = 0; i < d.length; i++) {
                d[i] = new data2();
                d[i].a = sc.nextInt();
                d[i].b = sc.nextInt();
            }

            for (i = 0; i < d.length; i++) {
                System.out.print(d[i].a + " " + d[i].b);
                System.out.println();
            }
            sc.close();
        }
    }

}
