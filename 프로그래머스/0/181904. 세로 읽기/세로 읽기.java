class Solution {
    public String solution(String my_string, int m, int c) {
        String answer = "";
        String temp = "";
        
        for(int i = 0; i < my_string.length(); i++) {
            temp += my_string.charAt(i);
            if(i % m == m - 1) {
                answer += temp.charAt(c - 1);
                temp = "";
            }
        }
        
        return answer;
    }
}