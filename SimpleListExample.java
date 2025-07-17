class A {
    int  a = 0;
    public void sum() {
        a ++;
    }
}

class B extends A {
    int a = 3;
}
public class SimpleListExample {
    public static void main(String[] args) {
        A obj = new A();
        A obj1 = new A();
        obj.sum();
        obj1.sum();

        System.out.println((obj.a));
       
    }
}
