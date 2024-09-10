import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.Color;

public class BorderDecorator extends Decorator{

public BorderDecorator(Component c, int xCoord, int yCoord, int w, int h){
    super(c); // Call to the superclass constructor with Component parameter
    this.x = xCoord;
    this.y = yCoord;
    this.width = w;
    this.height = h;
}


    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D)g;
        cmp.draw(g);
        g2d.setStroke(new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL,
									  0, new float[] {9}, 9));
        g2d.setColor(Color.black);
        g2d.drawRect(x, y, width, height);
    }
}