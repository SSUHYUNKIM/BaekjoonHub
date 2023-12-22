#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int a, b;
    string op;
    
    stringstream ss(binomial);
    
    ss >> a >> op >> b;  
    
    if(op == "+")
        return a + b;
    else if(op == "-")
        return a - b;
    else if(op == "*")
        return a * b;
    else
        return answer;
}