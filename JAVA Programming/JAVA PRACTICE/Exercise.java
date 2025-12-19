import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Exercise {
    public static void main(String[] args) {

        ArrayList<Integer> ali = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter no:-");
        for (int i = 0; i < 5; i++) {
            int n = sc.nextInt();
            // now, will check a no. is in arraylist or not
            if (!ali.contains(n)) { // this methods receives a boolean, if a arraylist does not contain an element
                                    // // then will add element
                ali.add(n);
            }
            Collections.sort(ali);
        }
        System.out.println(ali);
        sc.close();
    }
}
