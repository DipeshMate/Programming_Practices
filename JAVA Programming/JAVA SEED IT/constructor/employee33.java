import java.util.Scanner;

class employee33 {
    int id;
    String name;
    float sal;

    employee33(int x, String y, float z) {
        id = x;
        name = y;
        sal = z;
    }

    public int getid() {
        return id;
    }

    public String getname() {
        return name;
    }

    public float getsal() {
        return sal;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter values:- ");
        employee33 s1 = new employee33(sc.nextInt(), sc.next(), sc.nextFloat());
        System.out.println(s1.getid() + " " + s1.getname() + " " + s1.getsal());
        sc.close();
    }
}
