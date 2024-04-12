#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = n; i > 0; i--)
    {
        int temp = 0;
        
        for(int j = i; j > 0; j--)
        {
            temp += j;
            if(temp == n)
            {
                answer++;
                break;
            }
            else if(temp > n)
                break;
        }
        
    }
    return answer;
}