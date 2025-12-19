public class insert {

    public static void main(String[] args) {

        int x[] = new int[10];
        x[0] = 5;
        x[1] = 9;
        x[2] = 6;
        x[3] = 10;
        x[4] = 12;
        x[5] = 7;
        int n = 6;

        for (int i = 0; i < n; i++) {
            System.out.print(x[i] + " ");
        }
        System.out.println();
        int a = 20;
        int index = 2;
        for (int i = n; i > index; i--) {
            x[i] = x[i - 1];// shifting of elements to right
            System.out.print(x[i] + " ");
        }
        x[index] = a;// inserting of element
        System.out.println();
        for (int i = 0; i < n; i++)
            System.out.print(x[i] + " ");
        System.out.println();
    }
}
