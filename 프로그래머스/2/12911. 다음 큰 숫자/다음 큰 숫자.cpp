#include <string>
#include <vector>

using namespace std;

int count(int n)
{
    int cnt = 0;
    
    while(n != 0)
    {
        if(n % 2 == 1) 
            cnt++;
        n /= 2;
    }

    return cnt;
}

int solution(int n) {
    int cntN = count(n);
    
    while(true)
    {
        n++;

        if(count(n) == cntN)
        {
            break;
        }
    }
    
    return n;
}