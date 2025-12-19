public class reverse {
    public static void main(String[] args) {
        int a[] = { 1, 2, 3, 4, 5, 6 };
        for (int i = a.length - 1, j = 0; i >= 0; i--, j++) {
            System.out.print(a[i] + "+" + +a[j]);
        }
    }
}
