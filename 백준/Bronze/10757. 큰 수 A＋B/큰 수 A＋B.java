import java.util.*;
import java.io.*;
import java.math.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
		
		BigInteger A = new BigInteger(in.next());
		BigInteger B = new BigInteger(in.next());
        
        System.out.println(A.add(B).toString());
    }
}