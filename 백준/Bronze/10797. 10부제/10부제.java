import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int answer = 0;
        
        for(int i = 0; i < 5; i++) {
            int temp = Integer.parseInt(st.nextToken());
            if (n == temp) {
				answer++;
			}
        }
        
        System.out.println(answer);
    }
}