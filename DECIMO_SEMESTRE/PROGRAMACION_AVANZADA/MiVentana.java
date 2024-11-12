import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class MiVentana extends JFrame{
    MiPanel p;
    JButton b;

    public MiVentana (){
        super("Mi Grafico");
        this.setBounds(50,50,300,500);
        this.setLayout(new BorderLayout());
        b = new JButton("clic");
        GestionBoton gb = new GestionBoton(this);
        b.addActionListener(gb);

        p=new MiPanel();

        this.add(b, BorderLayout.NORTH);
        this.add(p, BorderLayout.CENTER);

        this.setVisible(true);


    }



    class MiPanel extends JPanel{
        int x1 = 20;
        int y1 = 20;
        int x2 = 50;
        int y2 = 50;

        public void paintComponent(Graphics g){
            super.paintComponent(g);

            g.drawLine(20);
        }

        class GestionBoton implements ActionListener{
            MiVentana v;

            public GestionBoton(MiVentana xv){
                this.v = xv;
            }

            public void actionPerformed(ActionEvent e){
                v.p.x2 = 100;
                v.p.y2 = 100;
                v.repaint();
            }
        }
    }
}