#include <vector>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size(), n = nums2.size();
        int l = (m + n + 1) / 2, r = (m + n + 2) / 2;
        return (findKthNums(nums1, 0, nums2, 0, l) + findKthNums(nums1, 0, nums2, 0, r)) / 2.0;
    }

    double findKthNums(vector<int> &nums1, int i, vector<int> &nums2, int j, int k)
    {
        if (i >= nums1.size()) return nums2[j + k - 1];
        if (j >= nums2.size()) return nums1[i + k - 1];

        if (k == 1) return min(nums1[i], nums2[j]);
        int l = i + k / 2 - 1 < nums1.size() ? nums1[i + k / 2 - 1] : INT_MAX;
        int r = j + k / 2 - 1 < nums2.size() ? nums2[j + k / 2 - 1] : INT_MAX;
        return l < r ? findKthNums(nums1, i + k / 2, nums2, j, k - k / 2) : findKthNums(nums1, i, nums2, j + k / 2, k - k / 2);
    }
    
};
