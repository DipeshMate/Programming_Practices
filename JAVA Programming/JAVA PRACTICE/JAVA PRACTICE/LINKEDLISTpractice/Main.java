public class Main{

    public static void main(String[] args) {
        System.out.println("hello");
        Animal animal = new Dog();
    }
}

interface Animal{

    abstract public void eat();
    abstract public void run();
}
class Dog implements Animal{

    public void eat(){
        System.out.println("eating");
    }

    public void run(){
        System.out.println("running");
    }
}
