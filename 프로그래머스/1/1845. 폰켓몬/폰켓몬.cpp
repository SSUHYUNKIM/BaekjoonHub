#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size() / 2;
    
    unordered_set<int> unSet(nums.begin(), nums.end());
    
    if(unSet.size() > max) {
        return max;
    } else {
        return unSet.size();
    }
}