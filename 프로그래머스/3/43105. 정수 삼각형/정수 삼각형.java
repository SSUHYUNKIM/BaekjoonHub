import java.util.*;

class Solution {
    public int solution(int[][] triangle) {
        int answer = 0;
        int len = triangle.length - 1;
        int dp[][] = new int[501][501];
        dp[0][0] = triangle[0][0];
        
        for(int i = 1; i <= len; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                if(j == 0)
                    dp[i][j] = dp[i - 1][j];
                else if(j == i)
                    dp[i][j] = dp[i - 1][j - 1];
                else
                     dp[i][j] = Math.max(dp[i - 1][j], dp[i - 1][j - 1]);
                
                dp[i][j] += triangle[i][j];
            }
        }
        
        answer = dp[len][0];
        for(int i = 1 ; i <= len ; i++) 
        {
            if(dp[len][i] > answer)
                answer = dp[len][i];
        }
        
        return answer;
    }
}