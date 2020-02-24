#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>& nums) {
        // auto last = unique(nums.begin(), nums.end());
        // return distance(nums.begin(), last);
        if(nums.empty()) return 0;
        auto it = nums.begin();
        auto last = nums.begin();
        while(++it!=nums.end()) {
            if(!(*last==*it)&&++last!=it) *last = move(*it);
        }
        return distance(nums.begin(), ++last);
    }
    
    int unique(vector<int>& nums) {
        if(nums.empty()) return 0;
        int p = 0;
        for(int i = 1; i<nums.size(); i++) {
            if(!(nums[p]==nums[i])&&++p!=i) nums[p] = nums[i];
        }
        return ++p;
    }
};
