import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Character> sStack = new Stack<>();
        Stack<Character> lStack = new Stack<>();
        int answer = 0;
        
        int N = Integer.parseInt(br.readLine());
        String skills = br.readLine();
        
        for(int i = 0; i < N; i++) {
            char c = skills.charAt(i);
            
            if (c == 'L') {
                lStack.push(c);
            } else if (c == 'S') {
                sStack.push(c);
            } else if (c == 'K') {
                if (!sStack.isEmpty()) {
                    answer++;
                    sStack.pop();
                } else {
                    break;
                }
            } else if (c == 'R') {
                if (!lStack.isEmpty()) {
                    answer++;
                    lStack.pop();
                } else {
                    break;
                }
            } else {
                answer++;
            }
        }
         
        System.out.println(answer);
    }
}