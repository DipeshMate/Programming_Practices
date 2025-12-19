public class clearbit {
    public static void main(String[] args) {
        int n = 5;
        int pos = 2;

        int bitmask = 1 << pos;
        int notBitMask = ~(bitmask);

        int newNo = notBitMask & n;
        System.out.println(newNo);
    }
}
