import java.util.Scanner;

//https://docs.oracle.com/javase/tutorial/java/data/numberformat.html - "-" is saying left justified - 15 is saying 
//15 characters - s is saying type String - 03 (you don't want 0,3) is saying 3 characters long, with padded zero's - d 
//is saying type double - \n is saying new line but per Oracle, you should instead use %n

//So in this instance,your passing in 3 formatters(they are the things with the%in front)%-15 s is formatting first 
//passed in argument to be left justified,15 characters long,and type String.%03d(removed decimal)is formatting second 
//passed in argument to be 3 characters long with leading zeros./n(you should use%n)is saying make a new line.

public class vk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("=".repeat(32));
        for (int i = 0; i < 3; i++) {
            String str = sc.next();
            int x = sc.nextInt();
            System.out.printf("%-15s", str);
            System.out.printf("%03d\n", x);
        }
        System.out.println("=".repeat(32));
        sc.close();
    }
}
