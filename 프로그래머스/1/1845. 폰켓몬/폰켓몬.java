import java.util.*;
import java.io.*;

class Solution {
    public int solution(int[] nums) {
        int answer = nums.length / 2;
        HashSet<Integer> hashSet = new HashSet<>();
        
        for (int num : nums) {
            hashSet.add(num);
        }
        
        if(hashSet.size() > answer)
            return answer;
        else
            return hashSet.size();
    }
}