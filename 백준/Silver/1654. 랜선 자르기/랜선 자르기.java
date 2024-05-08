import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        long max = 0, min = 0, mid = 0;
        
        int K = Integer.parseInt(st.nextToken()); 
		int N = Integer.parseInt(st.nextToken()); 
        int[] arr = new int[K];
        
        for(int i = 0; i < K; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            if(max < arr[i]) {
                max = arr[i];
            }
        }
        
        max++;
        
        while(min < max) {
            long count = 0;
            mid = (max + min) / 2;
            
            for(int i = 0; i < arr.length; i++) {
                count += (arr[i] / mid);
            }
            
            if(count < N) {
                max = mid;
            } else {
                min = mid + 1;
            }
        }
        
        
        System.out.println(min - 1);
    }
}