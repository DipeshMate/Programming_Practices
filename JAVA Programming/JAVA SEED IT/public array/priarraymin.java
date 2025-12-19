import java.util.Scanner;

class data1 {
    int x[];
    int temp;

    public void set(int[] y) {
        x = y;
    }

    public void min() {

        for (int i = 0; i < x.length; i++) {
            for (int j = i + 1; j < x.length; j++) {
                if (x[i] > x[j]) {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        System.out.println("List by Marks");
        for (int i = 0; i < x.length; i++) {
            System.out.println(x[i]);
        }

        int m = x[0];
        for (int i = 0; i < x.length; i++) {
            if (m > x[i]) {
                m = x[i];
            }
        }
        System.out.println("min= " + m);
    }
}

class priarraymin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] y = new int[5];
        data1 d1 = new data1();
        for (int i = 0; i < y.length; i++) {
            y[i] = sc.nextInt();
        }
        d1.set(y);
        d1.min();
        sc.close();
    }
}
