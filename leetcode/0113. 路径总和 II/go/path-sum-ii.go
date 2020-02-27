package problem0113

import (
	"github.com/GoKit"
)

type TreeNode = GoKit.TreeNode

func pathSum(root *TreeNode, sum int) [][]int {
	res := [][]int{}
	path := []int{}

	var helper func(*TreeNode, int)
	helper = func(node *TreeNode, sum int) {
		if node == nil {
			return
		}
		path = append(path, node.Val)
		if node.Left == nil && node.Right == nil && sum == node.Val {
			temp := make([]int, len(path))
			copy(temp, path)
			res = append(res, temp)
		}
		helper(node.Left, sum-node.Val)
		helper(node.Right, sum-node.Val)
		path = path[:len(path)-1]
	}

	helper(root, sum)
	return res
}