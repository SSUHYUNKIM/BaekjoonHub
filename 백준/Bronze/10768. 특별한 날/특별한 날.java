import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int m = Integer.parseInt(br.readLine());
        int d = Integer.parseInt(br.readLine());
        
        if(m < 2)
            System.out.println("Before");
        else if(m > 2)
            System.out.println("After");
        else {
            if(d < 18)
                System.out.println("Before");
            else if (d > 18)
                System.out.println("After");
            else
                System.out.println("Special");
        }
    }
}