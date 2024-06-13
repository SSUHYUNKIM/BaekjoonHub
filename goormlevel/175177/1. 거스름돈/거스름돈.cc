#include <iostream>
using namespace std;
int main() {
	int N, answer = 0;
	cin >> N;
	
	if(N >= 40) {
		answer += (N / 40);
		N %= 40;
	}
	if(N >= 20) {
		answer += (N / 20);
		N %= 20;
	}
	if(N >= 10) {
		answer += (N / 10);
		N %= 10;
	}
	if(N >= 5) {
		answer += (N / 5);
		N %= 5;
	}
	answer += N;
	
	cout << answer << '\n';
	return 0;
}