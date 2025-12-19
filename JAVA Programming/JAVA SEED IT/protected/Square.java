class shape {
    protected int a;

    public void set(int x) {
        a = x;
    }
}

class circle extends shape {
    public void cal() {
        System.out.println(3.14 * a * a);
    }
}

class Square extends shape {
    public void cal() {
        System.out.print(a * a);
    }

    public static void main(String[] args) {
        circle c = new circle();
        Square s = new Square();
        c.set(7);
        s.set(7);
        c.cal();
        s.cal();
    }

}
