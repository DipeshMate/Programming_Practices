
class student11 {
    private int a, b;

    student11() {
        a = 0;
        b = 0;
    }

    student11(int x, int y) {
        a = x;
        b = y;
    }

    public int geta() {
        return a;
    }

    public int getb() {
        return b;
    }

    public static void main(String[] args) {
        student11 d1 = new student11();
        student11 d2 = new student11(7, 2);

        System.out.println(d1.geta() + " " + d1.getb() + " " + d2.geta() + " " + d2.getb());

    }

}
