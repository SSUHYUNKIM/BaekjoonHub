#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

int timeToSecond(string time) {
    int minutes = stoi(time.substr(0, 2));
    int seconds = stoi(time.substr(3, 2));
    return minutes * 60 + seconds;
}

string secondToTime(int seconds) {
    int minute = seconds / 60;
    int second = seconds % 60;
    stringstream ss;
    ss << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second;
    return ss.str();
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    
    int videoSecond = timeToSecond(video_len);
    int currentSecond = timeToSecond(pos);
    int opStartSecond = timeToSecond(op_start);
    int opEndSecond = timeToSecond(op_end);
    
    if (opStartSecond <= currentSecond && currentSecond <= opEndSecond) {
        currentSecond = opEndSecond;
    }
    
    for(auto command : commands) {
        if (command == "prev") {
            currentSecond = max(0, currentSecond - 10);
        } else if (command == "next") {
            currentSecond = min(videoSecond, currentSecond + 10);
        }
        if (opStartSecond <= currentSecond && currentSecond <= opEndSecond) {
            currentSecond = opEndSecond;
        }
    }
    
    return secondToTime(currentSecond);
}