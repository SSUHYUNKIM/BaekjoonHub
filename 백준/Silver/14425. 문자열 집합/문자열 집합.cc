#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M;
string input;
vector<string>v1;
vector<string>v2;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        v1.push_back(input);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < M; i++)
    {
        string input;
        cin >> input;
        if (binary_search(v1.begin(), v1.end(), input)) 
            v2.push_back(input);
    }

    sort(v2.begin(), v2.end());
    
    cout << v2.size() << '\n';
    return 0;
}