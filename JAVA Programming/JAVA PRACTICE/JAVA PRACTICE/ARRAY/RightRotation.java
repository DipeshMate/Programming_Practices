public class RightRotation {
    public static void main(String[] args) {
        int[] x = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int temp = x[x.length - 1];

        for (int a : x)
            System.out.print(a + " ");
        System.out.println();

        for (int i = x.length - 1; i > 0; i--) {
            x[i] = x[i - 1];
        }
        x[0] = temp;
        System.out.println();
        for (int i = 0; i < x.length; i++) {
            System.out.print(x[i] + " ");
        }
    }
}
