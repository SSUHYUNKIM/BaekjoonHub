#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int temp1 = 0, temp2 = 0;
    
    for(auto ss : s)
    {
        if(ss == 'p' || ss == 'P')
            temp1++;
        else if(ss == 'y' || ss == 'Y')
            temp2++;
    }
    
    return temp1 == temp2;
}