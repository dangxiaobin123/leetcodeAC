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
        int l = 0, r = nums.size()-1;
        while(l<=r) {
            int m = l+(r-l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) l = m+1;
            else r = m-1;
        }
        return l;
    }

    int lowerBound1(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        while(l<r) {
            int m = l+(r-l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) l = m+1;
            else r = m;
        }
        return l;
    }
};
