#include <string>
#include <algorithm>
#include <cctype>  

using namespace std;

bool solution(string s) {
    return (s.size() == 4 || s.size() == 6) && all_of(s.begin(), s.end(), ::isdigit);
}