import java.util.Scanner;

class basic2 {
    private int price, dis;
    private String pro;

    public void set(String p, int pr, int d) {
        price = pr;
        dis = d;
        pro = p;
    }

    public String getpro() {
        return pro;
    }

    public int getprice() {
        return price;
    }

    public int getdis() {
        return dis;
    }

    public int getact() {
        return price - price * dis / 100;
    }
}

class product {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        basic2 x1 = new basic2();
        basic2 x2 = new basic2();
        basic2 x3 = new basic2();

        System.out.println("Enter product name, price, discount:-");
        x1.set(sc.next(), sc.nextInt(), sc.nextInt());
        System.out.println("Enter product name, price, discount:-");
        x2.set(sc.next(), sc.nextInt(), sc.nextInt());
        System.out.println("Enter product name, price, discount:-");
        x3.set(sc.next(), sc.nextInt(), sc.nextInt());

        System.out.println();

        if (x1.getact() > x2.getact() && x1.getact() > x3.getact()) {
            System.out.println(x1.getpro() + " is having more discount");
            System.out.println("product name:-" + x1.getpro());
            System.out.println("price:-" + x1.getprice());
            System.out.println("discount:-" + x1.getdis());
        }
        if (x2.getact() > x1.getact() && x2.getact() > x3.getact()) {
            System.out.println(x2.getpro() + " is having more discount");
            System.out.println("product name:-" + x2.getpro());
            System.out.println("price:-" + x2.getprice());
            System.out.println("discount:-" + x2.getdis());
        }
        if (x3.getact() > x2.getact() && x3.getact() > x1.getact()) {
            System.out.println(x3.getpro() + " is having more discount");
            System.out.println("product name:-" + x3.getpro());
            System.out.println("price:-" + x3.getprice());
            System.out.println("discount:-" + x3.getdis());
        }
        sc.close();
    }
}
