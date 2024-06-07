class Solution {
    public int solution(int order) {
        int answer = 0;
        String ord = Integer.toString(order);
        
        for(int i = 0; i < ord.length(); i++) {
            if((ord.charAt(i) - '0') != 0 && (ord.charAt(i) - '0') % 3 == 0)
                answer++;
        }
        
        return answer;
    }
}