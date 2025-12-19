import java.util.Scanner;

class search {
    int a, t;

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int i;
            search[] s = new search[5];
            search b = new search();

            for (i = 0; i < s.length; i++) {
                s[i] = new search();
                s[i].a = sc.nextInt();
            }
            System.out.print("Search no:-  ");
            b.t = sc.nextInt();
            int c = 0;
            for (i = 0; i < s.length; i++) {
                if (s[i].a == b.t) {
                    System.out.println(b.t + " is in Array");
                    c++;
                }

            }
            if (c == 0) {
                System.out.println(b.t + " is not in Array");
            }

            sc.close();
        }
    }
}
