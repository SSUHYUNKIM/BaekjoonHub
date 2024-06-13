#include <iostream>
using namespace std;
int main() {
	int N1, N2, D;
	cin >> N1 >> N2;
	cin >> D;
	
	for(int i = 0; i < D; i++) {
		if(i % 2 == 0) {
			if(N1 % 2 == 0) {
				N1 /= 2;
				N2 += N1; 
			} else {
				N1 /= 2;
				N2 += (N1 + 1);
			}
		} else {
			if(N2 % 2 == 0) {
				N2 /= 2;
				N1 += N2; 
			} else {
				N2 /= 2;
				N1 += (N2 + 1);
			}
		}
	}
	
	cout << N1 << " " << N2 << '\n';
	return 0;
}