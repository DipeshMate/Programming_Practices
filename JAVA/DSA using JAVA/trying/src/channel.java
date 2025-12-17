import java.awt.*;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

/*
<applet code=p3 width=1350 height=650> </applet>
*/
public class channel extends Frame implements ItemListener {
    String msg = "";
    Label name;
    Checkbox ent, info, music, kids;

    public channel() {
        setLayout(null);
        name = new Label("Select Channel Category:-");
        ent = new Checkbox("Entertainment", null, false);
        info = new Checkbox("Infotainment", null, false);
        music = new Checkbox("Music", null, false);
        kids = new Checkbox("Kids", null, false);
        add(name);
        add(ent);
        add(info);
        add(music);
        add(kids);
        name.setBounds(300, 200, 50, 50);
        ent.setBounds(210, 200, 50, 50);
        info.setBounds(390, 200, 50, 50);
        music.setBounds(560, 200,50,50);
        kids.setBounds(730, 200,50,50);
        ent.addItemListener(this);
        info.addItemListener(this);
        music.addItemListener(this);
        kids.addItemListener(this);
    }

    public void itemStateChanged(ItemEvent ie) {
        repaint();
    }

    public void paint(Graphics g) {
        if (ent.getState()) {
            msg = ent.getLabel();
            g.drawString(msg, 170, 120);
            g.drawString("SONY", 200, 150);
            g.drawString("SAB", 200, 170);
        }
        if (info.getState()) {
            msg = info.getLabel();
            g.drawString(msg, 170, 180);
            g.drawString("AASTHA", 200, 190);
            g.drawString("SUN TV", 200, 210);
        }
        if (music.getState()) {
            msg = music.getLabel();
            g.drawString(msg, 170, 220);
            g.drawString("9XM", 200, 230);
            g.drawString("SONY PIX", 200, 250);
        }
        if (kids.getState()) {
            msg = kids.getLabel();
            g.drawString(msg, 170, 260);
            g.drawString("CARTOON NETWORK", 200, 270);
            g.drawString("POGO", 200, 290);
        }
    }
    public static void main(String[] args) {
        channel f = new channel();
        f.setSize(500, 500);
        f.setTitle("TV Channels");
        f.setVisible(true);
    }
}