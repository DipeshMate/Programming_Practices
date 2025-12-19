class factrecursion {

    static int f = 1;

    static void fact(int n) {
        if (n != 0) {
            f = f * n;
            fact(n - 1);
        }
    }

    public static void main(String[] args) {
        fact(5);
        System.out.println(f);
    }
}
