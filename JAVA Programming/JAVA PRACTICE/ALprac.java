
import java.util.ArrayList;

public class ALprac {

    public static void main(String[] args) {
        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();

        l2.add(11);
        l2.add(22);
        l2.add(33);
        l1.add(6);
        l1.add(7);
        l1.add(8);
        l1.add(9);
        l1.add(10);
        l1.add(8);
        l1.add(9);

        l1.addAll(l2);

        System.out.println(l1.contains(7));
        System.out.println(l1.indexOf(9));
        System.out.println(l1.lastIndexOf(9));

        l1.set(2, 5);
        for (int i = 0; i < l1.size(); i++) {
            System.out.print(l1.get(i));
            System.out.print(", ");
        }

    }
}