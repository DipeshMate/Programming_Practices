import java.util.Scanner;

class student123 {
    private int rno;
    private String name;
    private static String clg;

    public void set(int r, String n) {
        rno = r;
        name = n;
    }

    static public void setclg(String c) {
        clg = c;
    }

    public int getrno() {
        return rno;
    }

    public String getname() {
        return name;
    }

    static public String getclg() {
        return clg;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        student123 s1 = new student123();
        student123 s2 = new student123();

        System.out.println("Enter rollno & name of s1");
        s1.set(sc.nextInt(), sc.next());

        System.out.println("Enter rollno  & name of s2");
        s2.set(sc.nextInt(), sc.next());

        System.out.println("Enter College Name ");
        setclg(sc.next());
        System.out.println("detail of s1");
        System.out.println("Roll no= " + s1.getrno());
        System.out.println("name= " + s1.getname());
        System.out.println("detail of s2");
        System.out.println("Roll no=" + s2.getrno());
        System.out.println("name= " + s2.getname());
        System.out.println("clg=" + getclg());

        sc.close();
    }

}
