#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    int answer = 1;
    double a = 1;
    
    if(balls == share)
        return 1;
    
    for(int i = 1; i <= share; i++)
    {
        a /= (double)i;
        a *= (double)(balls - i + 1);
    }
    
    return (int)a;
}