class Solution {
    public int solution(String A, String B) {
        if (A.equals(B)) {
            return 0;
        }
    
        int len = A.length();
        
        for (int i = 1; i <= len; ++i) {
            A = A.charAt(len - 1) + A.substring(0, len - 1);
        
            if (A.equals(B)) {
                return i;
            }
        }
    
        return -1;
    }
}