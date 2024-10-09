import java.util.*;

class Solution {
    public int[] solution(int[][] score) {
        int n = score.length;
        int[] ranks = new int[n];
        List<double[]> avgList = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            double average = (score[i][0] + score[i][1]) / 2.0;
            avgList.add(new double[]{average, i});
        }

        avgList.sort((a, b) -> Double.compare(b[0], a[0]));

        int rank = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0 || avgList.get(i)[0] != avgList.get(i - 1)[0]) {
                rank = i + 1;
            }
            ranks[(int) avgList.get(i)[1]] = rank; 
        }

        return ranks;
    }
}