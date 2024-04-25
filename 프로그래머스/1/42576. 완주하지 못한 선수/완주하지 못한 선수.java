import java.util.*;
import java.io.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        HashMap<String, Integer> hashMap = new HashMap<String, Integer>();
        
        for(String part : participant) {
            hashMap.put(part, hashMap.getOrDefault(part, 0) + 1);
        }
        
        for(String com : completion) {
            hashMap.put(com, hashMap.get(com) - 1);
        }
        
        for(String hash : hashMap.keySet()) {
            if(hashMap.get(hash) == 1) {
                answer = hash;
            }
        }
        
        return answer;
    }
}

