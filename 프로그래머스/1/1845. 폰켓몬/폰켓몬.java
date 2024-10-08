import java.util.*;
import java.io.*;

class Solution {
    public int solution(int[] nums) {
        int max = nums.length / 2;
        HashSet<Integer> hashSet = new HashSet<>();
        
        for (int num : nums) {
            hashSet.add(num);
        }
        
        if(hashSet.size() > max)
            return max;
        else
            return hashSet.size();
    }
}