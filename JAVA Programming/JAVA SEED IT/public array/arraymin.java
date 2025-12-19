import java.util.Scanner;

class data {
    int[] x;

    public void set(int[] y) {
        x = y;
    }

    public void max() {
        int m = x[0];
        for (int i = 0; i < x.length; i++) {
            if (m > x[i]) {
                m = x[i];
            }
        }
        System.out.println(m);
    }
}

class arraymin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] y = new int[5];
        data d1 = new data();
        for (int i = 0; i < y.length; i++) {
            y[i] = sc.nextInt();
        }
        d1.set(y);
        sc.close();
    }
}