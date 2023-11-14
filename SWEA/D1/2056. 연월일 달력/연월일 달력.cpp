#include<iostream>

using namespace std;

int mon[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int T, year, month, day, input;

int main(int argc, char** argv)
{
	cin>>T;
    
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        cin >> input;
        year = input / 10000;
        input %= 10000;
        month = input / 100;
        input %= 100;
        day = input;
        if(month >= 1 && month <= 12 && (day >= 1 && day <= mon[month]))
		{
            cout << "#" << test_case << " ";
            cout.width(4);	
			cout.fill('0');
			cout << year << '/';
            cout.width(2);	
			cout.fill('0');
			cout << month << '/';
			cout.width(2);	
			cout.fill('0');
			cout << day << '\n';
		}
        else 
        {
			cout << "#" << test_case << " " <<-1 << '\n';
		}
	}
	return 0;
}