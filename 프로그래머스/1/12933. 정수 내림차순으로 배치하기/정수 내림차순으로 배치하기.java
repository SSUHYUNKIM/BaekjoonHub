import java.util.*;

class Solution {
    public long solution(long n) {
        long answer = 0;
        String[] temp = String.valueOf(n).split("");
        Arrays.sort(temp);
        
        StringBuilder sb = new StringBuilder();
        for (String t : temp) 
            sb.append(t);
        
        return Long.parseLong(sb.reverse().toString());
    }
}