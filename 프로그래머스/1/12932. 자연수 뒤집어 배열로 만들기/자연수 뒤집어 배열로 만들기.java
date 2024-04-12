import java.util.*;

class Solution {
    public int[] solution(long n) {
        String temp = "" + n;
        int[] answer = new int[temp.length()];
        int idx = 0;
        
        while(n > 0)
        {
            answer[idx] = (int)(n % 10);
            n /= 10;
            idx++;
        }
        
        return answer;
    }
}