package other;

public class kjj {
    public static void main(String[] args) {
        int n = 363;
        int rev = 0;
        int temp = n;
        while (temp != 0) {
            temp = temp % 10;
            rev = rev * 10 + temp;
            temp = temp / 10;
        }
        if (temp == n) {
            System.out.print(temp);
        }
    }

}
