import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<String> solution(String my_str, int n) {
        List<String> answer = new ArrayList<>();
        String temp = "";
        
        for(int i = 0; i < my_str.length(); i++) {
            if(i != 0 && i % n == 0) {
                answer.add(temp);
                temp = "";
            }
            temp += my_str.charAt(i); 
        }
        
        if(temp != "") {
            answer.add(temp);
        }
        
        return answer;
    }
}