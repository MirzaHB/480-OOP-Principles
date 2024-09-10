import java.util.ArrayList;

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(ArrayList<Item<E>> arr) {
       
        for(int i = 0; i < arr.size() - 1; i++) {
            int minIdx = findMinIndex(arr, i);
            swap(arr, i, minIdx);
        }
    }
    
    private int findMinIndex(ArrayList<Item<E>> arr, int start) {
        int minIdx = start;
        for(int j = start + 1; j < arr.size(); j++) {
            if(arr.get(j).getItem().compareTo(arr.get(minIdx).getItem()) < 0)
                minIdx = j;
        }
        return minIdx;
    }

    private void swap(ArrayList<Item<E>> arr, int i, int j) {
        Item<E> temp = arr.get(i);
        arr.set(i, arr.get(j));
        arr.set(j, temp);
    }
}
