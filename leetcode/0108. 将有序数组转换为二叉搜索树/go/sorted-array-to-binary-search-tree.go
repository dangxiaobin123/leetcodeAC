package problem0108

import (
	"github.com/GoKit"
)

type TreeNode = GoKit.TreeNode

func sortedArrayToBST(nums []int) *TreeNode {
	if len(nums) == 0 {
		return nil
	}
	m := len(nums)/2
	return &TreeNode{
		Val: nums[m],
		Left: sortedArrayToBST(nums[:m]),
		Right: sortedArrayToBST(nums[m+1:]),
	}
}
