import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Stroke;
import java.awt.BasicStroke;
import java.awt.Color;

public class ColouredFrameDecorator extends Decorator {
    
    private int thickness;

    public ColouredFrameDecorator(Component c, int xCoord, int yCoord, int w, int h, int thick) {
        super(c); // Pass c to the Decorator's constructor
        this.x = xCoord;
        this.y = yCoord;
        this.width = w;
        this.height = h;
        this.thickness = thick;
    }

    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D) g;
        
        // First, draw the component's own drawing logic
        super.draw(g); // Delegates to the wrapped component's draw method
        
        // Then add the colored frame
        Stroke oldStroke = g2d.getStroke(); // Save the old stroke
        g2d.setStroke(new BasicStroke(thickness));
        g2d.setColor(Color.red);
        g2d.drawRect(x, y, width, height);
        g2d.setStroke(oldStroke); // Restore the original stroke
    }
}
