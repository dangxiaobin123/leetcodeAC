package problem0114

import (
	"github.com/GoKit"
)

type TreeNode = GoKit.TreeNode

func flatten(root *TreeNode) {
	if root == nil {
		return
	}
	flatten(root.Left)
	flatten(root.Right)
	if root.Left == nil {
		return
	}
	node := root.Left
	for node.Right != nil {
		node = node.Right
	}
	node.Right = root.Right
	root.Right = root.Left
	root.Left = nil
}