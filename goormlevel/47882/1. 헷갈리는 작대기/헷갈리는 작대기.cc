#include <iostream>
using namespace std;
int main() {
	string S;
	int arr[4] = {0};
	getline(cin, S);
	
	for(auto str : S) {
		if(str == '1')
			arr[0]++;
		else if(str == 'I')
			arr[1]++;
		else if(str == 'l')
			arr[2]++;
		else if(str == '|')
			arr[3]++;
	}
	
	for(auto a : arr){
		cout << a << '\n';
	}
	return 0;
}