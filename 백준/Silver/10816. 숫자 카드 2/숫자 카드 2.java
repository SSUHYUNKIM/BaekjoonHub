import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] cards = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        
        for(int i = 0; i < N; i++) {
            cards[i] = Integer.parseInt(st.nextToken());
        }
        
        Arrays.sort(cards);
        
        int M = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        StringBuilder sb = new StringBuilder();
        
        for(int i = 0; i < M; i++) {
			int key = Integer.parseInt(st.nextToken());
			sb.append(upperBound(cards, key) - lowerBound(cards, key)).append(' ');
		}
        
        System.out.println(sb);
    }
    
    private static int upperBound(int[] arr, int key) {
		int temp = 0; 
		int len = arr.length; 
 
		while (temp < len) {
			int mid = (temp + len) / 2;
 
			if (key < arr[mid]) {
				len = mid;
			} else {
				temp = mid + 1;
			}
		}
 
		return temp;
	}
    
    private static int lowerBound(int[] arr, int key) {
		int temp = 0; 
		int len = arr.length; 
 
		while (temp < len) {
			int mid = (temp + len) / 2;
            
			if (key <= arr[mid]) {
				len = mid;
			} else {
				temp = mid + 1;
			}
		}
 
		return temp;
	}
}