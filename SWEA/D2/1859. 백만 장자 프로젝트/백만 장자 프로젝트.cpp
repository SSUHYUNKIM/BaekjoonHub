#include<iostream>

using namespace std;

int T, N, arr[1000001];

int main(int argc, char** argv)
{
	cin>>T;
    
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        long long sum = 0;
        int max = 0;
        
		cin >> N;
        
		for(int i = 0; i < N; i++)
			cin >> arr[i];
        
        max = arr[N];
        
        for(int i = N - 1; i >= 0; i--)
        {
            if(max < arr[i])
                max = arr[i];
            else
                sum += (max - arr[i]);
        }
        cout << "#" << test_case << " " << sum << '\n';
	}
	return 0;
}