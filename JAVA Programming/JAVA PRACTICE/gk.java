public class gk {
    public static void main(String[] args) {
        int a = 12, b = 18, c = 9, lcm;

        lcm = (a > b) ? (b > a) ? b : c : (c > a) ? c : b;
        System.out.println(lcm);
    }
}
