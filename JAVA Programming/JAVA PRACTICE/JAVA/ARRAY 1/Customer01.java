import java.io.*;

class Customer implements Serializable {
    String CustomerID;
    String name;
    String phoneNo;
    static int count = 1;

    Customer() {
    }

    Customer(String n, String p) {
        CustomerID = "C" + count;
        count++;
        name = n;
        phoneNo = p;
    }

    public String toString() {
        return "Customer ID:" + CustomerID + "\nName :" + name + "\nPhoneNo:- " + phoneNo + "\n";
    }

}

class Customer01 {
    public static void main(String[] args) throws Exception {

        Customer List[] = { new Customer("Ajay", "954786220"), new Customer("Bindu", "7845266632"),
                new Customer("Chirag", "8642233412") };

        FileOutputStream fos = new FileOutputStream("Customer.txt");
        ObjectOutputStream oos = new ObjectOutputStream(fos);

        oos.writeInt(List.length);

        for (Customer c : List) {
            oos.writeObject(c);
        }

        oos.close();
        fos.close();

    }
}
