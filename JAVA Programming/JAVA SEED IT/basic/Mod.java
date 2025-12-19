class Mod {
    public static void main(String[] argu) {
        int a = 12345, b;

        b = a % 10;
        System.out.println("Last Digit:-" + b);

        a = a / 10000;
        b = a % 10;
        System.out.println("First Digit:- " + b);

        // a = a / 10;
        // b = a % 10;
        // System.out.println(b);

        // a = a / 10;
        // b = a % 10;
        // System.out.println(b);

        // a = a / 10;
        // b = a % 10;
        // System.out.print(b);

    }
}
