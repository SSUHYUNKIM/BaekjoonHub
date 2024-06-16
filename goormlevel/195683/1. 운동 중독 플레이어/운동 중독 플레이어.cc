#include <iostream>
using namespace std;
int main() {
	int W, R;
	cin >> W >> R;
	cout << (int)(W * (1 + R / 30.0)) << '\n';
	return 0;
}