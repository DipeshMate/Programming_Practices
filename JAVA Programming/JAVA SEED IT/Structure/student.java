import java.util.Scanner;

class student {
    int r;
    String n, t;
    float m;

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        student o1 = new student();
        student o2 = new student();
        student o3 = new student();
        student o4 = new student();

        System.out.print("Enter Name,Marks And roll No for student 1:- ");
        o1.n = sc.next();
        o1.m = sc.nextInt();
        o1.r = sc.nextInt();

        o4.t = o1.n + o1.m + o1.r;
        System.out.println(o4.t + "");
        System.out.println();

        System.out.print("Enter Name,Marks And roll No for student 2:- ");
        o2.n = sc.next();
        o2.m = sc.nextInt();
        o2.r = sc.nextInt();

        o4.t = o2.n + o2.m + o2.r;
        System.out.println(o4.t);

        System.out.print("Enter Name,Marks And roll No for student 2:- ");
        o3.n = sc.next();
        o3.m = sc.nextInt();
        o3.r = sc.nextInt();

        o4.t = o3.n + o3.m + o3.r;
        System.out.println(o4.t);

        sc.close();
    }
}
