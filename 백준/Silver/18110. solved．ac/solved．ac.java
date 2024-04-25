import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        int temp = (int)Math.round(n * 0.15);
        double sum = 0;
        
        for(int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        Arrays.sort(arr);
        
        for(int i = temp; i < n - temp; i++) {
            sum += arr[i];
        }
        
        System.out.println((int)Math.round(sum / (n - 2 * temp)));
        br.close();
    }
}