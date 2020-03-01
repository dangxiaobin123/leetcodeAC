class Solution(object):
    def removeDuplicates(self, nums):
        p = 0
        for r in range(1, len(nums)):
            if nums[p] != nums[r]:
                p += 1
                nums[p], nums[r] = nums[r], nums[p]
        return p+1
