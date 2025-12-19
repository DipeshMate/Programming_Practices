
//import required packages
import java.awt.*;
import java.awt.event.*;

//create subclass of frame
class MyFrame extends Frame implements MouseListener{

    //declare variables
//    Button b;
//    Label l;

    //create constructor
    public MyFrame() {
        addMouseListener(this);
        //creating objects of button
//        b = new Button("blue");

//        setLayout(new FlowLayout());//set layout to flowLayout
//        add(b);

//        l=new Label("YOYO");
//        l.setBounds(40,50,100,50);
//        add(l);

        //implement ActionListener  action Listeners on Buttons
//        b.addActionListener(this);



    }

    public void mouseClicked(MouseEvent e) {
        if(e.getSource()== this.getBackground())
        {
            int R = (int)(Math.random()*100) % 255;
            int G = (int)(Math.random()*100) % 255;
            int B = (int)(Math.random()*100) % 255;
            Color mycolor = new Color(R,G,B);
            this.setBackground(mycolor);
        }


    }
    public void mousePressed(MouseEvent e) {

    }
    public void mouseReleased(MouseEvent e) {
    }
    public void mouseExited(MouseEvent e) {
    }
    public void mouseEntered(MouseEvent e) {
    }



}


class bgColor {
    public static void main(String[] args) {
        MyFrame f = new MyFrame();
        f.setSize(500, 500);
        f.setTitle("BACKGROUND ON CLICK COlOR CHANGE");
        f.setVisible(true);

    }
}