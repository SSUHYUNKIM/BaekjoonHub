#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++)
    {
        if(myString[i] - 'a' < 'l' - 'a')
            myString[i] = 'l';
    }
    answer = myString;
    return answer;
}