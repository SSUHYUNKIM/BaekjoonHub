import java.util.*;
import java.io.*;

class Solution {
    public int[] solution(int[] array) {
        int[] answer = new int[2];
        int max = Integer.MIN_VALUE;
        int maxIndex = -1;
        for(int i = 0; i < array.length; i++) {
            if(array[i] > max)
            {
                max = array[i];
                maxIndex = i;
            }          
        }
        
        answer[0] = max;
        answer[1] = maxIndex;
        return answer;
    }
}