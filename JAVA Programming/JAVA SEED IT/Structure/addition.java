import java.util.Scanner;

class addition {
    int a, b;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        addition o1 = new addition();
        o1.a = sc.nextInt();
        o1.b = sc.nextInt();
        System.out.print(o1.a + o1.b);

        sc.close();
    }
}