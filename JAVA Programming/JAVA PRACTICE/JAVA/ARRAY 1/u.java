import java.util.Scanner;

public class u {
    public static void main(String[] args) {
        Scanner priyanshu = new Scanner(System.in);

        int maths = priyanshu.nextInt();
        int science = priyanshu.nextInt();
        priyanshu.nextLine();
        String name = priyanshu.nextLine();
        System.out.println(name);
        System.out.println(maths + science);

        priyanshu.close();
    }
}
