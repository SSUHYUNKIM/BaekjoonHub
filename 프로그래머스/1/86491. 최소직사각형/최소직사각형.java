import java.util.*;

class Solution {
    public int solution(int[][] sizes) {
        int max_width = 0, max_height = 0;
        
        for(int i = 0; i < sizes.length; i++) {
            Arrays.sort(sizes[i]);
            max_width = Math.max(max_width, sizes[i][0]);
            max_height = Math.max(max_height, sizes[i][1]);
        }
        
        return max_width * max_height;
    }
}