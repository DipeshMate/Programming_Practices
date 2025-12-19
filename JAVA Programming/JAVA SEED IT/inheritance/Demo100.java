class M {
    public void show() {
        System.out.println("A");
    }
}

class Demo100 extends M {
    void display() {
        System.out.println("B");
    }

    public static void main(String[] args) {
        Demo100 x = new Demo100();
        x.show();
        x.display();
    }
}
