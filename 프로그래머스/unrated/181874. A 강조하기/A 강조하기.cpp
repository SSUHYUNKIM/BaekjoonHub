#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'a')
            myString[i] = 'A';
    }
    answer = myString;
    return answer;
}