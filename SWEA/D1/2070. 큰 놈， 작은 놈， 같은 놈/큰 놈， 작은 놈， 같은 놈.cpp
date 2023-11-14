#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T, A, B;
	cin>>T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
		cin >> A >> B;
        cout << "#" << test_case << " ";
        if(A < B)
           cout << "<" << '\n';
        else if(A > B)
            cout << ">" << '\n';
        else
            cout << "=" << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}