#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0, yCnt = 0;

    for(auto c : s) {
        if(c == 'p' || c == 'P') {
            pCnt++;
        }
        if(c == 'y' || c == 'Y') {
            yCnt++;
        }
    }

    return pCnt == yCnt;
}