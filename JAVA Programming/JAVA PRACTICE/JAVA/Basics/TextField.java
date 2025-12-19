import java.awt.*;
import java.awt.event.*;

public class TextField extends Frame implements ActionListener {

    Label l1,l;
    Button b;

    public TextField() {
        super("My Button");
        l = new Label(" " + count);
        b = new Button("CLICK");
        b.addActionListener(this);
        setLayout(new FlowLayout());
        add(l);
        add(b);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        count = count + 1;
        l.setText(" " + count);

    }

    public static void main(String[] args) {
        TextField ba = new ButtonAction();
        ba.setVisible(true);
        ba.setSize(400, 400);
    }

}
