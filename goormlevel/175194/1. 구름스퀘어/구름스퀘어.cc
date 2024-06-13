#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int N, s, e, answer = 0, last = -1;
	cin >> N;
	vector<pair<int, int>> events;
	
	for(int i = 0; i < N; i++) {
		cin >> s >> e;
		events.push_back(make_pair(e, s));
	}
	
	sort(events.begin(), events.end());
	
	for(auto event : events) {
		int start = event.second;
		int end = event.first;
		if(start >= last + 1) {
			answer++;
			last = end;
		}
	}
	
	cout << answer << '\n';
	return 0;
}