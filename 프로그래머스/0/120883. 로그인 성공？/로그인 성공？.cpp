#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for(auto d : db){
        if(d[0] == id_pw[0] && d[1] == id_pw[1]) {
            answer = "login";
            break;
        } else if(d[0] == id_pw[0]) {
            answer = "wrong pw";
        } else if(answer != "wrong pw"){
            answer = "fail";
        }
    }
    return answer;
}