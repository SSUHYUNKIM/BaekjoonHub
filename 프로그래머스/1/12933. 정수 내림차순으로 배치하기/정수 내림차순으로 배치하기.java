import java.util.Arrays;

class Solution {
    public long solution(long n) {
        char[] charArray = Long.toString(n).toCharArray();
        
        Arrays.sort(charArray);
        StringBuilder sortedStr = new StringBuilder(new String(charArray)).reverse();
        
        return Long.parseLong(sortedStr.toString());
    }
}