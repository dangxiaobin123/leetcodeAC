package problem0027

func removeElement(nums []int, val int) int {
	cur, i := 0, 0
	for ; i < len(nums); i++ {
		if val != nums[i] {
			nums[cur] = nums[i]
			cur++
		}
	}
	return cur
}