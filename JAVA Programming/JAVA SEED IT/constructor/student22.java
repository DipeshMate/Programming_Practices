class student22 {
    private int roll_no;
    private String name;
    private float marks;

    student22() {
        roll_no = 101;
        name = "Anjum";
        marks = 384;
    }

    student22(int x, String y, float z) {
        roll_no = x;
        name = y;
        marks = z;
    }

    public int getroll_no() {
        return roll_no;
    }

    public String getname() {
        return name;
    }

    public float getmarks() {
        return marks;
    }

    public static void main(String[] args) {
        student22 s1 = new student22();
        student22 s2 = new student22(101, "anjum naaz", 347);
        student22 s3 = new student22(103, "naaz", 342);
        student22 s4 = new student22(102, "talha anjum", 346);
        if (s2.getroll_no() > s3.getroll_no() && s2.getroll_no() > s4.getroll_no()) {
            System.out.println(s2.getroll_no() + " " + s2.getname() + " " + s2.getmarks());
        }
        if (s3.getroll_no() > s1.getroll_no() && s3.getroll_no() > s4.getroll_no()) {
            System.out.println(s3.getroll_no() + " " + s3.getname() + " " + s3.getmarks());
        }
        if (s4.getroll_no() > s1.getroll_no() && s4.getroll_no() > s3.getroll_no()) {
            System.out.println(s4.getroll_no() + " " + s4.getname() + " " + s4.getmarks());
        }

    }
}