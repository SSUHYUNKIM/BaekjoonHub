// 요구사항 : 1,4,7(왼손, 3으로 나누었을 때 나머지 1), 3,6,9(오른손, 3으로 나누었을 때 나머지 0(0제외)), 2, 5, 8, 0(가까운 손가락, 거리가 같을 경우 hand)
// 입력 : numbers(순서대로 누를 번호가 담긴 배열), hand(왼손잡이(left) of 오른손잡이(right))
// 출력 : 각 번호를 누른 엄지손가락 정보가 담긴 문자열

#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <cmath>

using namespace std;

unordered_map<int, pair<int, int>> keypad = {
    {1, {0, 0}}, {2, {0, 1}}, {3, {0, 2}},
    {4, {1, 0}}, {5, {1, 1}}, {6, {1, 2}},
    {7, {2, 0}}, {8, {2, 1}}, {9, {2, 2}},
    {0, {3, 1}}
};

string solution(vector<int> numbers, string hand) {
    string answer = "";
    pair<int, int> leftHand = {3, 0};
    pair<int, int> rightHand = {3, 2};
    
    if(hand == "right") {
        hand = "R";
    } else {
        hand = "L";
    }
    
    for(auto number : numbers) {
        if(number == 1 || number == 4 || number == 7) {
            answer += "L";
            leftHand = keypad[number];
        } else if (number == 3 || number == 6 || number == 9) {
            answer += "R";
            rightHand = keypad[number];
        } else {
            int rightDist = abs(rightHand.first - keypad[number].first) + abs(rightHand.second - keypad[number].second);
            int leftDist = abs(leftHand.first - keypad[number].first) + abs(leftHand.second - keypad[number].second);
            if(rightDist > leftDist) {
                answer += "L";
                leftHand = keypad[number];
            } else if (rightDist < leftDist) {
                answer += "R";
                rightHand = keypad[number];
            } else {
                if (hand == "R") {
                    answer += "R";
                    rightHand = keypad[number];
                } else {
                    answer += "L";
                    leftHand = keypad[number];
                }
            }
        }
    }
    
    return answer;
}