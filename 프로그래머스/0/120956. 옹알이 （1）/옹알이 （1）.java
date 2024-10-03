class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        
        for (int i = 0; i < babbling.length; i++) {
            boolean valid = true;
            for(int j = 0; j < babbling[i].length(); j++) {
                if(j + 3 <= babbling[i].length() && babbling[i].substring(j, j + 3).equals("aya")) j += 2;
                else if(j + 2 <= babbling[i].length() && babbling[i].substring(j, j + 2).equals("ye")) j += 1;
                else if(j + 3 <= babbling[i].length() && babbling[i].substring(j, j + 3).equals("woo")) j += 2;
                else if(j + 2 <= babbling[i].length() && babbling[i].substring(j, j + 2).equals("ma")) j += 1;
                else {
                    valid = false;
                    break;
                }
            }
            if (valid) answer++;
        }
        
        return answer;
    }
}