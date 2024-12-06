class Solution {
    public String solution(String s) {
        StringBuilder answer = new StringBuilder();
        int idx = 0;

        for (char c : s.toCharArray()) {
            if (c == ' ') {
                answer.append(c);
                idx = 0;
            } else {
                answer.append(idx % 2 == 0 ? Character.toUpperCase(c) : Character.toLowerCase(c));
                idx++;
            }
        }

        return answer.toString();
    }
}