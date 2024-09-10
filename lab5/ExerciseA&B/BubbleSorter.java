import java.util.ArrayList;

public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {

    @Override
    public void sort(ArrayList<Item<E>> arr) {       
        int n = arr.size();
        
        for(int pass = 0; pass < n - 1; pass++) {

            boolean swapped = false;
            for(int idx = 0; idx < n - pass - 1; idx++) {                
                if(arr.get(idx).getItem().compareTo(arr.get(idx + 1).getItem()) > 0) {
                    Item<E> temp = arr.get(idx);
                    arr.set(idx, arr.get(idx + 1));
                    arr.set(idx + 1, temp);                   
                    swapped = true;
                }
            }           
            if(!swapped) break;  // optimization: if no two elements were swapped in inner loop, then the list is sorted
        }
    }
}