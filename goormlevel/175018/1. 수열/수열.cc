#include <iostream>
using namespace std;

int fibo[100001];
int main() {
	int K;
	fibo[1] = 0;
	fibo[2] = 1;
	cin >> K;
	
	for(int i = 3; i <= K; i++) {
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000007;
	}
	
	cout << fibo[K] << '\n';
	return 0;
}