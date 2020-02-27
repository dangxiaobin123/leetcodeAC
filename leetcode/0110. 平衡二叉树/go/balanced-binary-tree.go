package problem0110

import (
	"github.com/Gokit"
)

type TreeNode = GoKit.TreeNode

func isBalanced(root *TreeNode) bool {
	_, balanced := helper(root)
	return balanced
}

func helper(root *TreeNode) (int, bool) {
	if root == nil {
		return 0, true
	}
	lDepth, leftIsBalance := helper(root.Left)
	rDepth, rightIsBalance := helper(root.Right)
	depth := max(lDepth, rDepth)+1
	if !leftIsBalance || !rightIsBalance || abs(lDepth-rDepth) > 1 {
		return depth, false
	} else {
		return depth, true
	}
}

func max(a, b int) int {
	if a>b {
		return a
	} else {
		return b
	}
}

func abs(a int) int {
	if a>0 {
		return a
	} else {
		return -a
	}
}