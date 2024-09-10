import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {
    public ArrayList<Double> data;
    public ArrayList<Observer> observers;
    
    public DoubleArrayListSubject() {
        data = new ArrayList<Double>();
        observers = new ArrayList<Observer>();
    }
    
    public void addData(Double theD) {
        data.add(theD);
        notifyAllObservers();
    }
    
    public void setData(Double element, int index) {
        data.set(index, element);
        notifyAllObservers();
    }
    
    public ArrayList<Double> getData() {
        return data;
    }
    
    public void populate(double[] theArr) {
        for(int i=0; i<theArr.length; i++) {
            data.add(theArr[i]);
        }
        notifyAllObservers();
    }
    
    public void display() {
        if(data.isEmpty()) {
            System.out.println("Empty List ...");
            return;
        }
        data.forEach(x -> System.out.print(x + " "));
        System.out.println();  // Add a newline for better formatting
    }

    @Override
    public void registerObserver(Observer o) {
        observers.add(o);
        o.update(data);
    }

    @Override
    public void removeObserver(Observer o) {
        observers.remove(o);
    }

    @Override
    public void notifyAllObservers() {
        for(Observer o : observers) {
            o.update(data);
        }
    }
}
