#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;
    int time = 0;
    int current_weight = 0; 
    int index = 0;

    for (int i = 0; i < bridge_length; i++) {
        bridge.push(0);
    }

    while (!bridge.empty()) {
        time++;

        current_weight -= bridge.front();
        bridge.pop();

        if (index < truck_weights.size()) {
            if (current_weight + truck_weights[index] <= weight) {
                bridge.push(truck_weights[index]);
                current_weight += truck_weights[index];
                index++;
            } else {
                bridge.push(0);
            }
        }
    }

    return time;
}