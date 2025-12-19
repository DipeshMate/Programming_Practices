class Stud {
    private int roll;
    private String name;

    public void set(int r, String n) {
        roll = r;
        name = n;
    }

    public int getroll() {
        return roll;
    }

    public String getname() {
        return name;
    }
}

class marks extends Stud {
    public Float m1, m2, m3;

    public void set(float x, float y, float z) {
        m1 = x;
        m2 = y;
        m3 = z;
    }

    public float gettotal() {
        return m1 + m2 + m3;
    }

    public static void main(String[] args) {
        marks x = new marks();
        x.set(101, "A");
        x.set(4, 5, 6);
        System.out.print(x.gettotal());
    }

}
