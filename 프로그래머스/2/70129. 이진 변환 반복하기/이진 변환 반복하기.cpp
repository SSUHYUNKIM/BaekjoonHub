#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0, zeroCount = 0;
    
    while(s != "1")
    {
        string temp = "";
        count++;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
                temp += "1";
            else
                zeroCount++;
        }
        
        int len = temp.length();
        s.clear();
        
        while(len > 0)
        {
            s += to_string(len % 2);
            len /= 2;
        }
    }
    
    answer.push_back(count);
    answer.push_back(zeroCount);
    return answer;
}