import java.util.Scanner;

class jaggedarrayrowmax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[][] = new int[4][];
        x[0] = new int[3];
        x[1] = new int[5];
        x[2] = new int[2];
        x[3] = new int[6];
        int i, j, max;

        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print("Enter no. ");
                x[i][j] = sc.nextInt();
            }
        }
        max = 0;
        for (i = 0; i < x.length; i++) {
            for (j = 0; j < x[i].length; j++) {
                System.out.print(x[i][j] + "\t");
                if (max < x[i][j]) {
                    max = x[i][j];
                }
            }
            System.out.println("max in row:- " + max);
        }

    }

}
