import java.util.Scanner;

// 02- Ask the user to enter the number of the month of summer & print the name of the month. 
// For eg - For ‘1’ print ‘January’, ‘2’ print ‘February’ & so on.
public class switch2 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int button = sc.nextInt();
        switch (button) {
            case 1:
                System.out.println("March- Month Of Summer Season");
                break;

            case 2:
                System.out.println("April Month Of Summer Season");
                break;
            case 3:
                System.out.println("May Month Of Summer Season");
                break;
            case 4:
                System.out.println("June Month Of Summer Season");
                break;
            default:
                System.out.println("It is not a month of summer");

        }
        sc.close();
    }
}
