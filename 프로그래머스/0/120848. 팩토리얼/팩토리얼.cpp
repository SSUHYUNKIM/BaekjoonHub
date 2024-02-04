#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int temp = 1;
    
    while(1)
    {
        temp *= answer;
        if(temp > n) 
            break;
        answer++;
    }
    
    answer--;
    return answer;
}