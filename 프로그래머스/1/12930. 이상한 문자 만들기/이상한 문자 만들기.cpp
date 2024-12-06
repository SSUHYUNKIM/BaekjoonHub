#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0; // 단어 내의 인덱스를 관리

    for (char c : s) {
        if (c == ' ') { // 공백 처리
            answer += c;
            idx = 0; // 공백이 나오면 단어 인덱스를 초기화
        } else {
            if (idx % 2 == 0) {
                answer += toupper(c); // 짝수 인덱스 대문자
            } else {
                answer += tolower(c); // 홀수 인덱스 소문자
            }
            idx++;
        }
    }
    
    return answer;
}