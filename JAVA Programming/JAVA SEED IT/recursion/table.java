class table {

    static int n;
    static int i;

    static void tableno(int n, int i) {
        if (i != 11) {
            System.out.println(n * i);
            tableno(n, i + 1);
        }
    }

    public static void main(String[] args) {
        tableno(5, 1);
    }
}