#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> nums)
{
    int max = nums.size() / 2;
    unordered_set<int> nums_set(nums.begin(), nums.end());
    
    if(nums_set.size() > max)
        return max;
    else
        return nums_set.size();
}