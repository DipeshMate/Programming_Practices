public class delete {
    public static void main(String[] args) {

        int x[] = new int[10];
        x[0] = 5;
        x[1] = 9;
        x[2] = 6;
        x[3] = 10;
        x[4] = 12;
        x[5] = 7;

        int index = 3;
        int n = 6;
        for (int i = 0; i < n; i++)
            System.out.print(x[i] + " ");// 5 9 6 10 12 7
        System.out.println();

        for (int i = 1; i < n; i++) {
            x[i - 1] = x[i];// shifting of element left side
            System.out.print(x[i] + " "); // 7 12 10
        }
        x[x.length - 1] = index;// assign the index 0
        System.out.println();
        for (int i = 0; i < n; i++)
            System.out.print(x[i] + " "); // 5 9 6 0 10 12
        System.out.println();

    }
}
