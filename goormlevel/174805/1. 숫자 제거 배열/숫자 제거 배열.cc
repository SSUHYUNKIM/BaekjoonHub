#include <iostream>
using namespace std;
int main() {
	int N, answer = 0;
	string input, K;
	cin >> N >> K;
	
	for(int i = 0; i < N; i++) {
		cin >> input;
		if(input.find(K) == string::npos)
			answer++;
	}
	
	cout << answer << '\n';
	return 0;
}