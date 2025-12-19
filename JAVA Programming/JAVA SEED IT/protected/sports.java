class markss {
    protected int m1, m2, m3;

    public void set(int x, int y, int z) {
        m1 = x;
        m2 = y;
        m3 = z;
    }
}

class sports extends markss {
    private int s;

    public void set(int k) {
        s = k;
    }

    public void cal() {
        System.out.println(m1 + m2 + m3 + s);
    }

    public static void main(String[] args) {
        sports s = new sports();
        s.set(7, 8, 9);
        s.set(11);
        s.cal();
    }
}
