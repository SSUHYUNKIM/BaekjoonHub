class Solution {
    public int solution(int chicken) {
        int answer = 0;
        
        while(chicken > 9) {
            chicken -= 10;
            if(chicken >= 0) {
                chicken++;
            }
            answer++;
        }
        
        return answer;
    }
}