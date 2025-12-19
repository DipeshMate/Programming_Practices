import java.awt.*;

public class FirstApp1 extends Frame {
    Button b;
    Label l;
    TextField tf;

    public FirstApp1() {
        super("My App");
        setLayout(new FlowLayout());
        b = new Button("Ok BABY");
        l = new Label("Name");
        tf = new TextField(20);

        add(l);
        add(tf);
        add(b);

    }

    public static void main(String[] args) {
        FirstApp1 f = new FirstApp1();

        f.setSize(300, 300);
        f.setVisible(true);
    }
}
