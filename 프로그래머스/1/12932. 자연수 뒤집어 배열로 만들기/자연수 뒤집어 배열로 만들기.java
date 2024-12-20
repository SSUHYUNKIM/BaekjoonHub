class Solution {
    public int[] solution(long n) {
        int length = String.valueOf(n).length();
        int[] answer = new int[length];
        int idx = 0;
        
        while(n > 0) {
            answer[idx] = (int)(n % 10);
            n /= 10;
            idx++;
        }
        
        return answer;
    }
}