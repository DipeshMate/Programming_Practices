
class A {
}

class B extends A {
}

class C extends B {

}

@SuppressWarnings("unchecked")
class MyArray<T> {
    T A[] = (T[]) new Object[10];
    int length = 0;

    public void append(T v) {
        A[length++] = v;
    }

    public void display() {
        for (int i = 0; i < length; i++) {
            System.out.println(A[i]);
        }
    }
}

class genericDemo {
    static void fun(MyArray<? super C> obj) {
        obj.display();
    }

    public static void main(String[] args) {

        MyArray<B> ma1 = new MyArray<>();

        MyArray<A> ma2 = new MyArray<>();

        fun(ma1);
        fun(ma2);

    }
}
