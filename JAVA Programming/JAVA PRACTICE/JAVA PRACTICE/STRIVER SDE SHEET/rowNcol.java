
class rowNcol {

    public static int findMinOperation(int N, int[][] matrix) {
        // code here
        int max = 0;
        int ans = 0;
        int[] rowSum = new int[N];
        int[] colSum = new int[N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                rowSum[i] += matrix[i][j];
                System.out.println("\t row " + rowSum[i]);
                colSum[i] += matrix[j][i];
                System.out.println("\t col " + colSum[i]);
            }
            System.out.println("new");
            max = Math.max(Math.max(rowSum[i], colSum[i]), max);
            System.out.println(max + "new max");
        }

        for (int i = 0; i < N; i++) {
            ans += max - rowSum[i];
            System.out.println("new answer " + ans);
        }

        return ans;
    }

    public static void main(String[] args) {

        int matrix[][] = {
                { 1, 2, 3 },
                { 4, 2, 3 },
                { 3, 2, 1 },
        };
        int n = matrix.length;
        findMinOperation(n, matrix);

    }
}