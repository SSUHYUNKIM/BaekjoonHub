import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int A = Integer.parseInt(br.readLine());
        int B = Integer.parseInt(br.readLine());
        int C = Integer.parseInt(br.readLine());
        int D = Integer.parseInt(br.readLine());
        
        int[] arr1 = new int[] {A, B, C, D};
        Arrays.sort(arr1);
        int sum1 = arr1[1] + arr1[2] + arr1[3];
        
        int E = Integer.parseInt(br.readLine());
        int F = Integer.parseInt(br.readLine());
        
        int sum2 = Math.max(E, F);
        
        System.out.println(sum1 + sum2);
    }
}