#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> v;
    stringstream ss(s);
    string temp;
    
    while(ss >> temp) 
        v.push_back(temp);
    
    for(int i = 0; i < v.size(); i++) 
    {
        if(v[i] == "Z") 
            answer -= stoi(v[i - 1]);
        else 
            answer += stoi(v[i]);
    }
    
    return answer;
}