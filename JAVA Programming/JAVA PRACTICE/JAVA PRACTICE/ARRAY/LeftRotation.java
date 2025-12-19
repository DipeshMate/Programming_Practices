public class LeftRotation {
    public static void main(String[] args) {

        int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int temp = x[0];

        for (int A : x)
            System.out.print(A + " ");
        System.out.println();

        for (int i = 1; i < x.length; i++) {
            x[i - 1] = x[i];// x[1-1] = x[1] => x[0]=x[1];
        }
        x[x.length - 1] = temp;

        for (int A : x)
            System.out.print(A + " ");
        System.out.println();

    }
}
