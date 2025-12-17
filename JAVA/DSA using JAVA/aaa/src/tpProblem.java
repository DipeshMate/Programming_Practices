import java.util.*;
public class tpProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int v1 = sc.nextInt();
        int x2 = sc.nextInt();
        int v2 = sc.nextInt();

        if(x2 > x1 && v2 > v1)
            System.out.println("NO");
        else{
            while(x1<=x2)
            {
                if(x1==x2)

                    System.out.println("YES");

                x1 +=v1;
                x2 +=v2;
            }
            System.out.println("NO");
        }    }
    }

