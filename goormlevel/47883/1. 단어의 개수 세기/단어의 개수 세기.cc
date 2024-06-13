#include <iostream>
#include <sstream>
using namespace std;

int main() {
	int answer = 0;
	string input;
	getline(cin, input);
	stringstream ss(input);
	string word;
	
	while (ss >> word) {
		answer++;
	}
	
	cout << answer << endl;
	return 0;
}
