// 01- Make a Calculator.Take 2

// numbers (a & b) from the user and an operation as follows :
// 1 : + (Addition) a + b
// 2 : - (Subtraction) a - b
// 3 : * (Multiplication) a * b
// 4 : / (Division) a / b
// 5 : % (Modulo or remainder) a % b
// Calculate the result according to the operation given and display it to the
// user.
import java.util.Scanner;

class calculator {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int b = sc.nextInt();
        int a = sc.nextInt();
        int c;

        int button = sc.nextInt();
        switch (button) {
            case 1:
                System.out.println("Enter no.:-");
                c = a + b;
                System.out.println("Additon" + c);
                break;

            case 2:

                c = a - b;
                System.out.println("Subtraction" + c);
                break;
        }
        sc.close();
    }
}
