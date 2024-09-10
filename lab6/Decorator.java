import java.awt.Graphics;


public abstract class Decorator implements Component {
    protected Component cmp;
    protected int x, y, width, height;

    public Decorator(Component cmp) {
        this.cmp = cmp;
    }

    @Override
    public void draw(Graphics g) {
        // Delegate drawing to the component
        cmp.draw(g);
    }
}
