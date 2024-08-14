import java.util.*;

public class Solution {
    public List<Integer> solution(int[] answers) {
        int[] num1 = {1, 2, 3, 4, 5};
        int[] num2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] num3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        int[] cnt = {0, 0, 0, 0};  // 수포자들의 정답 개수 저장
        
        for (int i = 0; i < answers.length; i++) {
            if (answers[i] == num1[i % num1.length])
                cnt[1]++;
            if (answers[i] == num2[i % num2.length])
                cnt[2]++;
            if (answers[i] == num3[i % num3.length])
                cnt[3]++;
        }
        
        int maxCount = Math.max(cnt[1], Math.max(cnt[2], cnt[3]));
        int index = 0;
        
        List<Integer> answer = new ArrayList<>();
        for (int i = 1; i <= 3; i++) {
            if (cnt[i] == maxCount) {
                answer.add(i);
            }
        }
        
        return answer;
    }
}