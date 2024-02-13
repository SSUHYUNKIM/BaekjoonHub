#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> num = 
    {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };
    int temp = 0;

    for (int i = 0; i < num.size(); i++)
    {
        while ((temp = numbers.find(num[i])) != string::npos)
        {
            numbers.replace(temp, num[i].size(), to_string(i));
        }
    }
    answer = stoll(numbers);
    return answer;
}