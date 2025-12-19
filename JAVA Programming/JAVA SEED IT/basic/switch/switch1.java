import java.util.Scanner;

class switch1 {

   public static void main(String[] argu) {
      Scanner sc = new Scanner(System.in);

      int a = sc.nextInt();
      int button = sc.nextInt();

      switch (button)// parenthesis
      {
         case 1:
            if (a % 2 == 0)
               System.out.print("hello");

            break;
         case 2:
            if (a % 2 == 0)
               System.out.print("Ashok");

            break;
         case 3:
            if (a % 2 == 0)
               System.out.print("Sir");

            break;
         default:
            System.out.print("invalid");
      }
      sc.close();
   }
}
