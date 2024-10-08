class Solution {
    public int solution(int[] array) {
        int answer = 0;
        for(int a : array) {
            String strA = Integer.toString(a);
            for(char s : strA.toCharArray()) {
                if(s == '7') {
                    answer++;
                }
            }
        }
        return answer;
    }
}