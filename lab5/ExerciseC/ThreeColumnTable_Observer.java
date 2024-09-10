import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
    private DoubleArrayListSubject subject;

    public ThreeColumnTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject;
        this.subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> data) {
        System.out.println("Notification to Three-Column Table Observer: Data Changed:");
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
            if ((i + 1) % 3 == 0) {
                System.out.println();
            }
        }
        System.out.println();  // for an extra line between the notifications
    }
}
