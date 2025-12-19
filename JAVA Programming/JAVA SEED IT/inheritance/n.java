
class m {
    public void show() {
        System.out.println("A");
    }
}

class n extends m {
    public void show() {
        super.show();
        System.out.print("B");
    }

    public static void main(String[] args) {
        n y = new n();
        y.show();
    }
}
