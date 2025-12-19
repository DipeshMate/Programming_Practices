class circle {
    protected int r;

    public void set(int x) {
        r = x;

    }

    public void call() {
        System.out.println(3.14 * r * r);
    }
}

class square10 extends circle {
    public void call() {
        super.call();
        System.out.println(r * r);
    }

    public static void main(String[] args) {
        square10 s = new square10();
        circle c = new circle();
        s.set(5);
        c.set(5);
        s.call();
        c.call();
    }
}
