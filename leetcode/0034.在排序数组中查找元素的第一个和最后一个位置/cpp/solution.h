#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int lo = leftBound(nums, target);
        int hi = rightBound(nums, target);
        return {lo,hi};
    }
    
    int leftBound(vector<int> &nums, int target)
    {
        if (nums.empty()) return -1;
        int lo = 0, hi = nums.size();

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] >= target) {
                hi = mid;// NOTE: 向前规约
            } else {
                lo = mid + 1;
            }
        }
        if (lo >= nums.size()) return -1; // NOTE: 边界检查
        return nums[lo] == target ? lo : -1;
    }

    int rightBound(vector<int> &nums, int target)
    {
        if (nums.empty()) return -1;
        int lo = 0, hi = nums.size();

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] <= target) {
                lo = mid + 1;// NOTE: 向后规约
            } else {
                hi = mid;
            }
        }
        if (lo <= 0) return -1;// NOTE: 边界检查
        return nums[lo - 1] == target ? (lo-1) : -1;
    }
};
