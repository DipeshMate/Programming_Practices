import java.util.Arrays;

public class searching {
    public static void main(String[] args) {
        int a[] = { 2, 6, 11, 9, 4, 0, 10, 5, 3, 1 };
        int key = 12;

        Arrays.sort(a);
        for (int i : a) {
            if (i == key)
                System.out.print(key + " Find it in " + i + " index of an Array");

        }
        System.out.println("Not Found");
    }
}
