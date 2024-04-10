class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int temp1 = 0, temp2 = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == 'p' || s.charAt(i) == 'P')
                temp1++;
            else if(s.charAt(i) == 'y' || s.charAt(i) == 'Y')
                temp2++;
        }

        return temp1 == temp2;
    }
}