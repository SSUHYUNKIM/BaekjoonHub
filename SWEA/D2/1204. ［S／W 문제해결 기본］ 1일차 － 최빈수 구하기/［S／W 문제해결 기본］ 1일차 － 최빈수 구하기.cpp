#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	
	cin>>T;
	
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num, answer, max = 0;
        int arr[101] = {0, };
        
		for(int i = 0; i < 1001; i++)
        {
            cin >> num;
            arr[num]++;
        }
        
        for(int i = 0;  i < 101; i++)
        {
            if(arr[i] >= max)
            {
                max = arr[i];
                answer = i;
            }
        }
        cout << "#" <<test_case << " " << answer << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}