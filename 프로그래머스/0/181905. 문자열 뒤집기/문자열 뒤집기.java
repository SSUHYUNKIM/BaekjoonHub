class Solution {
    public String solution(String my_string, int s, int e) {
        StringBuffer sb = new StringBuffer(my_string.substring(s, e + 1));
        String str = sb.reverse().toString();

        my_string = my_string.replaceAll(my_string.substring(s, e + 1), str);
        return my_string;
    }
}