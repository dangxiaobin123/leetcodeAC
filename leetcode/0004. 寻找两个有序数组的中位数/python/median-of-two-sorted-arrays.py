
import sys

class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        a, b = len(nums1), len(nums2)
        l, r = (a+b+1)>>1, (a+b+2)>>1
        return (self.findKthNum(nums1, nums2, l)+self.findKthNum(nums1, nums2, r))/2
        
    def findKthNum(self, nums1, nums2, k):
        if len(nums1) == 0:
            return nums2[k-1]
        if len(nums2) == 0:
            return nums1[k-1]
        if k == 1:
            return min(nums1[0], nums2[0])
        
        m = k>>1
        l = nums1[m-1] if m-1<len(nums1) else sys.maxsize
        r = nums2[m-1] if m-1<len(nums2) else sys.maxsize

        return self.findKthNum(nums1[m:], nums2, k-m) if l<r else self.findKthNum(nums1, nums2[m:], k-m)