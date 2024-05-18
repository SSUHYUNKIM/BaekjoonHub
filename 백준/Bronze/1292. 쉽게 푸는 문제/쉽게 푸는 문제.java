import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int count = 0;
        int answer = 0;
        
        for(int i = 1; i <= B; i++) {
            for(int j = 1; j <= i; j++) {
                count++;
                
                if(A <= count && count <= B) {
					answer += i; 
				}
            }
        }
        
        System.out.println(answer);
    }
}