public class AB {
    public static void main(String[] args) {
        int a = sum(3);
        System.out.println(a);
    }

    static int sum(int b) {
        if (b > 0) {
            return b + sum(b - 1);
        } else
            return 0;
    }

}