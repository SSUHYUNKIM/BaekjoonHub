import java.util.*;

class Solution {
    public List<String> solution(String[] strings, int n) {
        List<String> stringList = Arrays.asList(strings);
        Collections.sort(stringList, (a, b) -> {
            if (a.charAt(n) != b.charAt(n)) {
                return Character.compare(a.charAt(n), b.charAt(n));
            }
            return a.compareTo(b);
        });
        return stringList;
    }
}