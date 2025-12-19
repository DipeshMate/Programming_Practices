import java.util.*;
//create a menu program with the following options:-?

public class Exercise1 {
    public static void main(String[] args) {

        ArrayList<Integer> temp = new ArrayList<Integer>();
        Scanner input = new Scanner(System.in);
        while (true) {
            displayMenu();
            int choice = input.nextInt();

            if (choice == 1) {
                System.out.print("Enter an Integer: ");
                temp.add(input.nextInt());
                System.out.println("Added");
            } else if (choice == 2) {
                System.out.print("Enter the number to remove: ");
                int elementToRemove = input.nextInt();

                if (temp.contains(elementToRemove)) {
                    temp.remove(Integer.valueOf(elementToRemove));
                    System.out.println("Removed");
                } else
                    System.out.println("Element not Found!");
            } else if (choice == 3) {
                System.out.println("Your List: " + temp);
            } else if (choice == 4) {
                System.out.println("Good Bye:");
                break;
            }
        }

        input.close();
    }

    private static void displayMenu() {
        System.out.println();
        System.out.println("1. Add");
        System.out.println("2. Remove");
        System.out.println("3. Display");
        System.out.println("4. Exit");
        System.out.println();

        System.out.println("Your Choice: ");

    }
}
