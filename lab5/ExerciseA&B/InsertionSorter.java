import java.util.ArrayList;

public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> arr) {
        
        for(int i = 1; i < arr.size(); i++) {
            Item<E> current = arr.get(i);
            int position = findPosition(arr, i, current);
            shiftItems(arr, position, i);
            arr.set(position, current);
        }
    }
    
    private int findPosition(ArrayList<Item<E>> arr, int upTo, Item<E> key) {
        int position;
        for(position = upTo - 1; position >= 0 && arr.get(position).getItem().compareTo(key.getItem()) > 0; position--);
        return position + 1;
    }

    private void shiftItems(ArrayList<Item<E>> arr, int from, int to) {
        for (int i = to; i > from; i--) {
            arr.set(i, arr.get(i - 1));
        }
    }
}
