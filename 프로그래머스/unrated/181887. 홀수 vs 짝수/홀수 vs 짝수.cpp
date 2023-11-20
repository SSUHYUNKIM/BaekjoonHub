#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int evenSum = 0;
    int oddSum = 0;
    for(int i = 0; i < num_list.size(); i++)
    {
        if(i % 2 == 0)
            evenSum += num_list[i];
        else
            oddSum += num_list[i];
    }
    
    answer = evenSum;
    
    if(oddSum > evenSum)
        answer = oddSum;
    
    return answer;
}