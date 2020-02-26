package problem0107

import "github.com/GoKit"

type TreeNode = GoKit.TreeNode

func levelOrderBottom(root *TreeNode) [][]int {
	d := depth(root)
	res := make([][]int, d)
	helper(res, root, d-1)
	return res
}

func depth(root	*TreeNode) int {
	if root == nil {
		return 0
	}
	l, r := depth(root.Left), depth(root.Right)
	if l < r {
		return r+1
	} else {
		return l+1
	}
}

func helper(res [][]int, root *TreeNode, level int) {
	if root == nil {
		return
	}
	res[level] = append(res[level], root.Val)
	helper(res, root.Left, level-1)
	helper(res, root.Right, level-1)
}