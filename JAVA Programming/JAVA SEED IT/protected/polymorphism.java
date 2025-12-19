class the {
    protected int a, b, c;

    public void set(int x, int y) {
        a = x;
        b = y;
    }

    public void call() {
        c = a + b;
        System.out.println(c);
    }
}

class poly extends the {

    public void call() {
        super.call();
        for (int i = a; i < b; i++) {
            if (i % 2 == 0) {
                System.out.println(+i + " is Even");
            } else
                System.out.println(+i + " is Odd");
        }
    }
}

class morphism extends poly {
    protected int fact = 1;

    public void call() {
        super.call();
        for (int i = 1; i <= b; i++) {
            fact = fact * i;
        }
    }

    public static void main(String[] args) {
        morphism f = new morphism();
        f.set(2, 8);
        f.call();
        f.call();
    }
}