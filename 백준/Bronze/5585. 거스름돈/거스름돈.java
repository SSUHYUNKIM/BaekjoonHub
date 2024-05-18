import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        n = 1000 - n;
        int answer = 0;
        
        while(true){
            if(n >= 500){
                answer += n / 500;
                n %= 500;
            } else if(n >= 100){
                answer += n / 100;
                n %= 100;
            } else if(n >= 50){
                answer += n / 50;
                n %= 50;
            } else if(n >= 10){
                answer += n / 10;
                n %= 10;
            } else if(n >= 5){
                answer += n / 5;
                n %= 5;
            } else {
                answer += n;
                break;
            }
        }
        
        System.out.println(answer);
    }
}