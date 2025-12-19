import java.util.Scanner;

class base {
    private int iden;
    private Float sal;
    private String name;
    private String depart;

    public void set(int id, Float s, String n, String d) {
        iden = id;
        name = n;
        depart = d;
        if (s <= 0) {
            return;
        }
        sal = s;
    }

    public int getiden() {
        return iden;
    }

    public Float getsal() {
        return sal;
    }

    public String getname() {
        return name;
    }

    public String getdepart() {
        return depart;
    }

}

class dept {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        base x1 = new base();
        base x2 = new base();
        base x3 = new base();

        System.out.println("Enter id,salary,name and department");
        x1.set(sc.nextInt(), sc.nextFloat(), sc.next(), sc.next());
        System.out.println("Enter id,salary,name and department");
        x2.set(sc.nextInt(), sc.nextFloat(), sc.next(), sc.next());
        System.out.println("Enter id,salary,name and department");
        x3.set(sc.nextInt(), sc.nextFloat(), sc.next(), sc.next());

        if (x1.getsal() > x2.getsal() && x1.getsal() > x3.getsal()) {
            System.out.println(x1.getsal() + " is greater");
            System.out.println("name:-" + x1.getname());
            System.out.println("id:-" + x1.getiden());
            System.out.println("sal:-" + x1.getsal());
        }
        if (x2.getsal() > x1.getsal() && x2.getsal() > x3.getsal()) {
            System.out.println(x2.getsal() + " is greater");
            System.out.println("name:-" + x2.getname());
            System.out.println("id:-" + x2.getiden());
            System.out.println("sal:-" + x2.getsal());
        }
        if (x3.getsal() > x1.getsal() && x3.getsal() > x2.getsal()) {
            System.out.println(x3.getsal() + " is greater");
            System.out.println("name:-" + x3.getname());
            System.out.println("id:-" + x3.getiden());
            System.out.println("sal:-" + x3.getsal());
        }
        System.out.println();
        sc.close();
    }
}

// System.out.println("dep:-" + x.getdepart());
// System.out.println("id:- " + max);
