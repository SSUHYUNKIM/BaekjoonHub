class Solution {
    public int solution(int num) {
        int answer = -1;
        long current = num;

        if(num == 1) {
            return 0;
        }

        for(int i = 1; i <= 500; i++) {
            if(current % 2 == 0) {
                current /= 2;
            } else {
                current = current * 3 + 1;
            }
            if(current == 1) {
                return i;
            }
        }
        
        return answer;
    }
}