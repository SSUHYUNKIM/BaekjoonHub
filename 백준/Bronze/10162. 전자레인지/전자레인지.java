import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        
        if(T % 10 != 0) {
			System.out.println(-1);
		} else {
			int A = T / 300;
			T %= 300;
			int B = T / 60;
			T %= 60;
			System.out.println(A + " " + B + " " + (T / 10));
		}
    }
}