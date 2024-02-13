#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp = 100;
    sort(array.begin(), array.end());
    
    for(auto a : array)
    {
        if(temp > abs(a - n))
        {
            temp = abs(a - n);
            answer = a;
        }
    }
    return answer;
}