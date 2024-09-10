import java.awt.Graphics;
import java.awt.Font;
import java.awt.Color;

// Text class that implements the Component interface
public class Text implements Component {

    private int x; // X-coordinate where the text is drawn
    private int y; // Y-coordinate where the text is drawn
    private String text; // The text to be drawn

    // Constructor for Text, initializes the text properties
    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    // Draws the text on the screen at the specified (x,y) location
    @Override
    public void draw(Graphics g) {
        g.setColor(Color.black); // Set the text color
        g.setFont(new Font("TimesRoman", Font.PLAIN, 16)); // Set the font
        g.drawString(text, x - 20, y); // Draw the text string
    }
    
}
