package problem0053

func maxSubArray(nums []int) int {
	sum, maxSum := 0, -1<<31
	for _, n := range nums {
		sum = max(sum+n, n)
		maxSum = max(maxSum, sum)
	}
	return maxSum
}

func max(a, b int) int {
	if a > b {
		return a
	} else {
		return b
	}
}