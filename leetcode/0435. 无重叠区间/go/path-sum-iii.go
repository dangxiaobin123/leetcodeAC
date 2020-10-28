package problem0437

import (
	"github.com/GoKit"
)

type TreeNode = GoKit.TreeNode

func pathSum(root *TreeNode, sum int) int {
	if root == nil {
		return 0
	} 
	return helper(root, sum)+pathSum(root.Left, sum)+pathSum(root.Right, sum)
}

func helper(root *TreeNode, sum int) int {
	if root == nil {
		return 0
	}
	ans := 0
	if root.Val == sum {
		ans = 1
	}
	ans += helper(root.Left, sum-root.Val)
	ans += helper(root.Right, sum-root.Val)
	return ans
}