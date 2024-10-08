class Solution {
    public int solution(int num, int k) {
        int answer = -1;
        String numStr = Integer.toString(num);
        
        for(int i = 0; i < numStr.length(); i++) {
            if(numStr.charAt(i) == Integer.toString(k).charAt(0)) {
                return i + 1;
            }
        }
        
        return answer;
    }
}