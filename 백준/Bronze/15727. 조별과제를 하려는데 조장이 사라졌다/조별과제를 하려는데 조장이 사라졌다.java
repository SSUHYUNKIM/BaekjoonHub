import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int L = Integer.parseInt(br.readLine());
        
        if(L % 5==0) 
            System.out.println(L/5);
		else 
            System.out.println(L/5 + 1);
    }
}