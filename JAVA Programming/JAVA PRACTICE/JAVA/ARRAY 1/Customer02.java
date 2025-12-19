
import java.io.*;

public class Customer02 {
    public static void main(String[] args) throws Exception {
        java.util.Scanner sc = new java.util.Scanner(System.in);

        FileInputStream fis = new FileInputStream("Customer.txt");
        ObjectInputStream ois = new ObjectInputStream(fis);

        int length = ois.readInt();

        Customer List[] = new Customer[length];

        for (int i = 0; i < List.length; i++) {
            List[i] = (Customer) ois.readObject();
        }

        System.out.println("Enter name of Customer");
        String name = sc.nextLine();

        for (int i = 0; i < List.length; i++) {
            if (name.equalsIgnoreCase(List[i].name))
                System.out.println(List[i]);
        }

        ois.close();
        fis.close();
    }

}
