#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto insert = lower_bound(nums.begin(), nums.end(), target);
        return distance(nums.begin(), insert);
    }
    
    int lowerBound(vector<int>& nums, int target) {
        
    }
};
