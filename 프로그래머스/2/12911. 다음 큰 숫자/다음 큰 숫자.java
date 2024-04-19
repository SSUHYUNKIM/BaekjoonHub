import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = n;
        int cntN = Integer.bitCount(n);
        
        while(true)
        {
            int cnt = Integer.bitCount(++answer);
            
            if(cntN == cnt)
                break;
        }
        
        return answer;
    }
}