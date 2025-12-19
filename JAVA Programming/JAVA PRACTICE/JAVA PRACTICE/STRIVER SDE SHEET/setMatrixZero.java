
public class setMatrixZero {

    public static int[][] zeroMatrix(int[][] arr) {

        int[] row = new int[arr.length];
        int[] col = new int[arr[0].length];

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (arr[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
            System.out.println();
        }
        System.out.println("for elements 1");

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    arr[i][j] = 0;
                }
            }
        }

        return arr;
    }

    public static void main(String[] args) {

        int arr[][] = {
                { 1, 1, 1, 1 },
                { 1, 0, 0, 1 },
                { 1, 1, 0, 1 },
        };
        System.out.println("before matrix");

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }

        zeroMatrix(arr);

        System.out.println("Final matrix");

        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + "\t");
            }
            System.out.println();
        }

    }
}
