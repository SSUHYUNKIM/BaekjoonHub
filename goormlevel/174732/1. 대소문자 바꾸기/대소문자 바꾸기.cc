#include <iostream>
using namespace std;
int main() {
	int N;
	string S;
	
	cin >> N;
	cin >> S;
	
	for(int i = 0; i < N; i++) {
		if(islower(S[i]))
			S[i] = toupper(S[i]);
		else
			S[i] = tolower(S[i]);
	}
	
	cout << S << endl;
	
	return 0;
}