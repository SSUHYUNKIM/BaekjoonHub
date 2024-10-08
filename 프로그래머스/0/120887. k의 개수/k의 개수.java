class Solution {
    public int solution(int i, int j, int k) {
        int answer = 0;
        String kStr = Integer.toString(k); 
    
        for (int num = i; num <= j; num++) {
            String numStr = Integer.toString(num);

            for (char c : numStr.toCharArray()) {
                if (c == kStr.charAt(0)) {
                    answer++;
                }
            }
        }
    
        return answer;
    }
}