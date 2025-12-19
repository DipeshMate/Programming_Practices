
class greatest {
    public static void main(String[] args) {

        int a = 6, b = 9, c = 7;

        if (a > b && a > c) {
            System.out.println("a is greater");
        }

        if (b > c && b > a) {
            System.out.println("b is greater");
        }

        if (c > a && c > b) {
            System.out.println("c is greater");
        }

        else {
            System.out.println("Invalid");
        }
    }

}