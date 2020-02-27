package problem0257

import (
	"github.com/GoKit"
	"strconv"
)

type TreeNode = GoKit.TreeNode

func binaryTreePaths(root *TreeNode) []string {
	if root == nil {
		return nil
	}
	res := []string{}

	var helper func(*TreeNode, string)
	helper = func(root *TreeNode, s string) {
		if root == nil {
			return
		}
		if len(s) == 0 {
			s += strconv.Itoa(root.Val)
		} else {
			s += "->"+strconv.Itoa(root.Val)
		}
		if root.Left == nil && root.Right == nil {
			res = append(res, s)
		}
		helper(root.Left, s)
		helper(root.Right, s)
	}

	helper(root, "")
	return res
}