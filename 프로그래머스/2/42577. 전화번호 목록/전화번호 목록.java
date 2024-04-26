import java.util.*;

class Solution {
    public boolean solution(String[] phone_book) {
        Map<String, Integer> hashMap = new HashMap<>();
        int len = phone_book.length;
        
        for(int i = 0; i < len; i++) {
            hashMap.put(phone_book[i] , i);
        }
        
        for(int i = 0; i < len; i++) {
            for(int j = 0; j < phone_book[i].length(); j++) {
                if (hashMap.containsKey(phone_book[i].substring(0, j)))
                    return false;
            }
        }
        
        return true;
    }
}