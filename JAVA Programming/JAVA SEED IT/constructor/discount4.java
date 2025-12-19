import java.util.Scanner;

class discount4 {

    private String proname;
    private int price;
    private float dis;

    discount4(String x, int y, float z) {
        proname = x;
        price = y;
        dis = z;
    }

    public String getproname() {
        return proname;
    }

    public int getprice() {
        return price;
    }

    public float getdis() {
        dis = price * dis / 100;
        return dis;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter product name, price and discount");
        discount4 a1 = new discount4(sc.next(), sc.nextInt(), sc.nextFloat());
        discount4 a2 = new discount4(sc.next(), sc.nextInt(), sc.nextFloat());
        discount4 a3 = new discount4(sc.next(), sc.nextInt(), sc.nextFloat());

        System.out.println("maximum marks getting Student ");

        if (a1.getdis() > a2.getdis() && a1.getdis() > a3.getdis()) {
            System.out.println(a1.getproname() + " " + a1.getprice() + " " + a1.getdis());
        }
        if (a2.getdis() > a3.getdis() && a2.getdis() > a1.getdis()) {
            System.out.println(a2.getproname() + " " + a2.getprice() + " " + a2.getdis());
        }
        if (a3.getdis() > a1.getdis() && a3.getdis() > a2.getdis()) {
            System.out.println(a3.getproname() + " " + a3.getprice() + " " + a3.getdis());
        }
        sc.close();
    }
}
