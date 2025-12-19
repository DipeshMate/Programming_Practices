import java.util.Scanner;

class stdetail {
    int roll, marks, s;
    String name;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        {
            stdetail[] o = new stdetail[3];
            stdetail t = new stdetail();
            stdetail temp;

            int i, j, max = 0;
            for (i = 0; i < o.length; i++) {
                o[i] = new stdetail();
                System.out.print("Enter Name:- ");
                o[i].name = sc.next();
                System.out.print("Enter Roll No:-");
                o[i].roll = sc.nextInt();
                System.out.print("Enter Marks:-");
                o[i].marks = sc.nextInt();
            }
            System.out.print("Search by roll:- ");
            t.s = sc.nextInt();

            int count = 0;
            for (i = 0; i < o.length; i++) {
                if (max < o[i].roll) {
                    max = o[i].roll;
                }
                if (o[i].roll == t.s) {
                    System.out.print(o[i].name + " " + o[i].roll + " " + o[i].marks);
                    count++;
                }
            }
            System.out.println("Student All Details");
            System.out.println(max + " is maximum");
            if (count == 0) {
                System.out.println(t.s + " is invalid");
            }

            for (i = 0; i < o.length; i++) {
                for (j = i + 1; j < o.length; j++) {
                    if (o[i].marks > o[j].marks) {
                        temp = o[i];
                        o[i] = o[j];
                        o[j] = temp;
                    }
                }
            }
            System.out.println("Candidate list by Marks");

            for (i = 0; i < o.length; i++) {
                System.out.println(o[i].marks);
            }

            sc.close();
        }
    }
}
