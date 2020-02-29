package problem0543

import (
	"github.com/GoKit"
)

type TreeNode = GoKit.TreeNode

func diameterOfBinaryTree(root *TreeNode) int {
	if root == nil {
		return 0
	}

	var helper func(*TreeNode) (int, int) 
	helper = func(node *TreeNode) (length, diameter int) {
		if node == nil {
			return 
		}
		
		l, ansl := helper(node.Left)
		r, ansr := helper(node.Right)
		return max(l, r)+1, max(l+r, max(ansl, ansr))
	}
	_, res := helper(root)
	return res
}

func max(a, b int) int {
	if a>b {
		return a
	} else {
		return b
	}
}