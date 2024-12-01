import java.util.*;

class Solution {
    public String solution(String s) {
        List<Character> list = new ArrayList<>();
        
        for (char c : s.toCharArray()) {
            list.add(c);
        }
        
        list.sort(Comparator.reverseOrder());
        
        StringBuilder answer = new StringBuilder();
        for (char c : list) {
            answer.append(c);
        }
        
        return answer.toString();
    }
}