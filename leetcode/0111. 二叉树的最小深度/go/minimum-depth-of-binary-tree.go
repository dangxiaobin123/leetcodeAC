package problem0111

import "github.com/GoKit"

type TreeNode = GoKit.TreeNode

func minDepth(root *TreeNode) int {
	switch  {
	case root == nil:
		return 0
	case root.Left == nil:
		return minDepth(root.Right)+1
	case root.Right == nil:
		return minDepth(root.Left)+1
	default:
		return 1+min(minDepth(root.Left), minDepth(root.Right))
	}
}

func min(a, b int) int {
	if a<b {
		return a
	} else {
		return b
	}
}

func max(a, b int) int {
	return a+b-min(a,b)
}