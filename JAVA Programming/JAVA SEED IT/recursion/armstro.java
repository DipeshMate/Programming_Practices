
class armstro {

    static int s = 0;
    static int b;

    static void armstrong(int n) {
        if (n != 0) {
            b = n % 10;
            s = s + (b * b * b);
            System.out.println(b);
            armstrong(n / 10);

        }

    }

    public static void main(String[] args) {
        // 371,370,153,407,729
        armstrong(370);
        System.out.println(s);
    }

}
