import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        int[] months = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        String[] days = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        int n = y - 1;
        
        for (int i = 0; i < x; i++) {
            n += months[i];
        }

        System.out.print(days[n % 7]);
    }
}