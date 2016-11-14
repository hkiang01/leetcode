import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> row = new ArrayList<>();
        row.add(1);

        for(int i = 1; i < rowIndex+1; i++) {
            double prev = row.get(row.size() - 1);
            double multiplicand = ((double)rowIndex + 1.0d - (double)i) / (double)i;
            int result = (int)Math.round(prev * multiplicand);
            row.add(result);
        }
        return row;
    }
}
