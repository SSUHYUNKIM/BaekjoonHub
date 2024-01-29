#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;
    map<string, string> mp { 
        {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},
        {".","e"},{"..-.","f"},{"--.","g"},{"....","h"},
        {"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
        {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},
        {"--.-","q"},{".-.","r"},{"...","s"},{"-","t"},
        {"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
        {"-.--","y"},{"--..","z"}
    };

string solution(string letter) {
    string answer = "";
    string temp;
    
    stringstream sstream;
    sstream.str(letter);
    
    while(sstream >> temp)
        answer += mp.find(temp) -> second;
    return answer;
}