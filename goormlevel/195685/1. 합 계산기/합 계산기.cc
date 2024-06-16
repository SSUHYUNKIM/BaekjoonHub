#include <iostream>
using namespace std;
int main() {
	int T, a, b, answer = 0;
	string operation;
	cin >> T;
	
	for(int i = 0; i < T; i++) {
		cin >> a >> operation >> b;
		if(operation == "+") {
			answer += (a + b);
		} else if(operation == "-") {
			answer += (a - b);
		} else if(operation == "*") {
			answer += (a * b);
		} else {
			answer += (a / b);
		}
	}
	
	cout << answer << '\n';
	return 0;
}