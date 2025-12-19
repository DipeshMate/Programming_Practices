class base1 {
    private int ro;
    private String name;
    private float marks;

    public void set(int r, String n, float m) {
        ro = r;
        name = n;
        marks = m;
    }

    public int getro() {
        return ro;
    }

    public String getname() {
        return name;
    }

    public Float getmarks() {
        return marks;
    }
}

class student {
    public static void main(String[] args) {
        base1 s = new base1();
        s.set(101, "Dipesh", 531);
        System.out.println("roll no- " + s.getro());
        System.out.println("name- " + s.getname());
        System.out.println("marks- " + s.getmarks());

    }
}
