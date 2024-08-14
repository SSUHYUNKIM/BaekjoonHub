public class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int[] student = new int[n + 2];
        
        for (int lo : lost) {
            student[lo]--;
        }
        for (int res : reserve) {
            student[res]++;
        }
        
        int answer = 0;
        
        for (int i = 1; i <= n; i++) {
            if (student[i] == -1) {
                if (student[i - 1] == 1) {
                    student[i - 1] = 0;
                    student[i] = 0;
                } else if (student[i + 1] == 1) {
                    student[i + 1] = 0;
                    student[i] = 0;
                }
            }
            if (student[i] >= 0) answer++;
        }
        
        return answer;
    }
}
