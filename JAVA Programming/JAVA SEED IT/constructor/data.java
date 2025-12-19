
class data {

    data() {
        System.out.println("default");
    }

    data(String n, float b) {
        System.out.println("Enter Name " + n);
        System.out.println("Enter Salary " + b);
    }

    data(int a, int b) {
        System.out.println("Addition " + (a + b));
    }

    public static void main(String[] args) {
        data d1 = new data();
        data d2 = new data("Anjum naaz", 60000);
        data d3 = new data(5, 6);
    }

}
