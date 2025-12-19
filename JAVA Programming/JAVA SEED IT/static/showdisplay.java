class ds {
    static int c = 0;

    void show() {
        c++;
    }

    void display() {
        c++;
    }

}

class showdisplay {
    public static void main(String[] args) {
        ds d1 = new ds();
        ds d2 = new ds();

        d1.show();
        d1.show();
        d1.show();
        d1.display();
        d1.display();
        d1.display();
        d1.display();
        d2.show();
        d2.show();
        d2.display();
        d2.display();
        d2.display();

        System.out.println(ds.c);
    }
}
