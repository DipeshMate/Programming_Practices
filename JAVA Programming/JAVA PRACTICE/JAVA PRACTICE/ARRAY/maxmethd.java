public class maxmethd {

    static int max(int a[]) {
        int max = a[0];
        for (int i = 1; i < a.length; i++)
            if (max < a[i])
                max = a[i];
        return max;
    }

    public static void main(String[] args) {
        int x[] = { 3, 7, 5, 9, 7, 11, 96, 21, 56, 87, 90 };
        max(x);
        System.out.println(max(x));
    }
}
