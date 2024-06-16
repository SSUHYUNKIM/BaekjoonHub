#include <iostream>
using namespace std;
int main() {
	int N, T, M, c, temp = 0;
	cin >> N;
	cin >> T >> M;
	
	for(int i = 0; i < N; i++) {
		cin >> c;
		temp += c;
	}
	
	M += temp;
	if(M >= 60) {
		T += M / 60;
		M %= 60;
	}
	if(T >= 24) {
		T %= 24;
	}
	
	cout << T << " " << M << '\n';
	return 0;
}