import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {
    private ArrayList<Double> data; 
    private DoubleArrayListSubject subject;

    public FiveRowsTable_Observer(DoubleArrayListSubject subject) {
        this.subject = subject; 
        subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> arr) {
        data = new ArrayList<>(arr);  // Copying the received data list
        System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
        displayData();
    }

    private void displayData() {
        if(data.isEmpty()) {
            System.out.println("No Data to Display.");
            return;
        }
        
        int columns = (data.size() + 4) / 5;  // Adjusting the number of columns
        
        for(int row = 0; row < 5; row++) {
            for(int col = 0; col < columns; col++) {
                int index = col * 5 + row;
                if(index < data.size()) {
                    System.out.printf("%.2f\t", data.get(index));  // Displaying data with 2 decimal places
                }
            }
            System.out.println();
        }
        System.out.println();
    }
}
