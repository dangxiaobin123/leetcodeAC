package problem0001

func twoSum(nums []int, target int) []int {
	cache := make(map[int]int, len(nums))

	for i, n := range nums {
		if j, exist := cache[n]; exist {
			return []int{j, i}
		}
		cache[target-n] = i
	}
	return nil
}