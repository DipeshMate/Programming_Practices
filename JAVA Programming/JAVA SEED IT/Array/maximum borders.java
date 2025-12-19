import java.io.*;
import java.util.*;

class TestClass {
    public static void main(String args[]) {
        static Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            // String data[] = getStringArray(n);
            // border(data);
        }
    }

    public static String[] getStringArray(int n) {
        String[] data = new String[n];

        for (int i = 0; i < data.length; i++) {
            data[i] = sc.next();
        }
        return data;
    }

    public static void border(String a[]) {

        int max1 = 0;
        for (int i = 0; i < a.length; i++) {

            String temp = a[i];
            temp = temp.replace('.', ' ');
            temp = temp.trim();
            if (max1 < temp.length()) {
                max1 = temp.length();
            }
        }
        System.out.println(max1);
    }

}
