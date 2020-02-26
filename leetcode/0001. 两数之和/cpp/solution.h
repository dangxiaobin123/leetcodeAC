#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2) return {};
        unordered_map<int, int> cache;
        for (int i = 0; i<nums.size(); i++) {
            if (cache.count(nums[i])) 
                return {cache[nums[i]], i};
            cache.emplace(target-nums[i], i);
        }
        return {};
    }
};
