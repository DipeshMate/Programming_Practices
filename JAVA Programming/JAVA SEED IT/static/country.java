import java.util.*;

class country {

    private String name;
    private String city;
    private long mob;
    private static String country;

    public void set(String n, String c, long m) {
        name = n;
        city = c;
        mob = m;
    }

    static void setcountry(String coun) {
        country = coun;
    }

    public String getname() {
        return name;
    }

    public String getcity() {
        return city;
    }

    public long getmob() {
        return mob;
    }

    static public String getcountry() {
        return country;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        country c1 = new country();
        country c2 = new country();

        System.out.println("Enter Name,City and Mobile no.:- ");
        c1.set(sc.next(), sc.next(), sc.nextLong());

        System.out.println("Enter Name,City and Mobile no.:- ");
        c2.set(sc.next(), sc.next(), sc.nextLong());

        System.out.println("Enter Country Name:-  ");
        setcountry(sc.next());

        System.out.println();

        System.out.println("Details of Client 1:- ");

        System.out.println("Name- " + c1.getname());
        System.out.println("City- " + c1.getcity());
        System.out.println("Mobile No- " + c1.getmob());

        System.out.print("Country= " + getcountry());

        System.out.println();

        System.out.println("Details of Client 2:- ");

        System.out.println("Name- " + c2.getname());
        System.out.println("City- " + c2.getcity());
        System.out.println("Mobile No- " + c2.getmob());

        System.out.print("Country= " + getcountry());

        sc.close();
    }
}
