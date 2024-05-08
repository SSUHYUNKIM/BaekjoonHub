import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int min = 256, max = 0, time = Integer.MAX_VALUE, high = 0;
        
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int[][] arr = new int[N][M];
        
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
                if(min > arr[i][j]) {
                    min = arr[i][j];
                }
                if(max < arr[i][j]) {
                    max = arr[i][j];
                }
            }
        }
        
        for(int i = min; i <= max; i++) {
            int count = 0, block = B;
            
            for(int j = 0; j < N; j++) {
                for(int k = 0; k < M; k++) {
                    if(i < arr[j][k]) {
                        count += ((arr[j][k] - i) * 2);
                        block += (arr[j][k] - i);
                    } else {
                        count += (i - arr[j][k]);
						block -= (i - arr[j][k]);
                    }
                }
            }
            if(block < 0) 
                break;
            
            if(time >= count) {
                time = count;
                high = i;
            }
        }
        
        System.out.println(time + " " + high);
    }
}