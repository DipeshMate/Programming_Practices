import java.util.Scanner;

class data {
    int r;
    String n;
    float[] m;

    public void set(int k, String p, float[] z) {
        r = k;
        n = p;
        m = z;
    }

    // void cal() {
    // float per, t = (float) 0;
    // for (int i = 0; i < m.length; i++) {
    // t = t + m[i];
    // }
    // per=m*100(m.length*100);
    // }

}

class student {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // data d1 = new data();
        int[] r = new int[5];
        String[] p = new String[5];
        float[] z = new float[5];
        System.out.println("Enter marks & name:- ");
        // s.set(sc.nextInt(), sc.next(), z);
        for (int i = 0; i < z.length; i++) {
            z[i] = sc.nextFloat();
        }
        for (int i = 0; i < p.length; i++) {
            p[i] = sc.next();
        }
        for (int i = 0; i < r.length; i++) {
            r[i] = sc.nextInt();
        }

        sc.close();
    }
}