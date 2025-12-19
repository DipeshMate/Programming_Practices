import java.awt.*;
import java.awt.event.*;

public class ButtonAction extends Frame implements ActionListener {

    int count = 0;
    Label l;
    Button b;

    public ButtonAction() {
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
        ButtonAction ba = new ButtonAction();
        ba.setVisible(true);
        ba.setSize(400, 400);
    }

}
