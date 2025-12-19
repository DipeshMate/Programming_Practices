public class Gdiag {
    public static void main(String[] args) {

        int x[][] = { { 7, 2, 8 }, { 3, 5, 6 }, { 6, 8, 9 } };
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < x.length; i++) {

            for (int j = 0; j < x[i].length; j++) {

                if (i == j) {
                    sum1 = sum1 + x[i][j];
                }
                if (i + j == x[i].length - 1) {
                    sum2 = sum2 + x[i][j];
                }

            }
        }
        System.out.println(sum1);
        System.out.println(sum2);

    }
}
