import java.util.*;
import java.io.*;

public class filereader {

    static FileInputStream fi;// object
    static Scanner sc;// object

    static void Divide() throws Exception {
        fi = new FileInputStream("C:/Users/D-Mate/Desktop/Test.txt");

        sc = new Scanner(fi);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        System.out.println(a / c);

        fi.close();
        sc.close();

    }

    public static void main(String[] args) throws Exception {
        try {
            Divide();
        } catch (Exception e) {
            System.out.println(e);
        }

        // int x = sc.nextInt();// reading a file
        // System.out.println(x);

    }
}
