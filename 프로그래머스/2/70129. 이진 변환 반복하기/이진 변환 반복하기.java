import java.util.*;

class Solution {
    public int[] solution(String s) {
        int[] answer = new int[2];
        int count = 0, zeroCount = 0;
        
        while(!s.equals("1"))
        {
            int temp = 0;
            count++;
            
            for(int i = 0; i < s.length(); i++)
            {
                if(s.charAt(i) == '1')
                    temp++;
                else
                    zeroCount++;
            }
            
            s = Integer.toBinaryString(temp);
        }
        
        answer[0] = count;
        answer[1] = zeroCount;
        
        return answer;
    }
}