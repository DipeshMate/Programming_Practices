class sumofn {

    static int s = 0;

    static void sum(int a, int b) {
        if (a <= b) {
            s = s + a;
            sum(a + 1, b);
            System.out.println(s);
        }
    }

    public static void main(String[] args) {
        sum(10, 20);
        System.out.println(s);
    }

}
