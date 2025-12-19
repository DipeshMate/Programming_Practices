class k {
    static int c1 = 0;
    static int c2 = 0;
    static int c3 = 0;

    void show() {
        c1++;
    }

    void display() {
        c2++;
    }

    void add() {

    }

}

class showdisplaycompare {
    public static void main(String[] args) {
        k d1 = new k();
        k d2 = new k();
        // k d3 = new k();

        d1.show();
        d1.show();
        d1.show();
        d1.show();
        d2.show();
        d2.show();
        d2.show();

        d1.display();
        d2.display();
        d2.display();
        d2.display();
        d2.display();
        d2.display();

        System.out.println(k.c1);
        System.out.println(k.c2);

        if (k.c1 > k.c2) {
            System.out.print(k.c1 + " show is maximum   ");
        } else {
            System.out.println(k.c2 + " display is maximum ");
        }

        k.c3 = k.c1 + k.c2;
        System.out.println(k.c3 + " Addition");

    }
}
