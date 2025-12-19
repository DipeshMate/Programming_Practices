
class demo {
    private int a;
    public Object[] set;

    public void set(int x) {
        a = x;
    }

    public int get() {
        return a;
    }
}

public class result {
    public static void main(String[] args) {
        demo x = new demo();
        x.set(7);
        System.out.print(x.get());
    }
}