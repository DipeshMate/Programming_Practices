
class demo {

    static int a = 1;

    static void show(int a) {
        if (a != 6) {
            show(a + 1);
            System.out.println(a);
        }
    }

    public static void main(String[] args) {
        show(1);
    }
}
