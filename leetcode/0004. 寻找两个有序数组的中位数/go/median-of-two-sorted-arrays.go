package problem0004

const INT_MAX = int(^uint(0)>>1)
const INT_MIN = ^INT_MAX

func findMedianSortedArrays(nums1 []int, nums2 []int) float64 {
	m, n := len(nums1), len(nums2)
	l, r := (m+n+1)/2, (m+n+2)/2
	// a1, a2 := findKthNums(nums1, 0, nums2, 0, l), findKthNums(nums1, 0, nums2, 0, r)
	a1, a2 := findKthNums1(nums1, nums2, l), findKthNums1(nums1, nums2, r)
	return float64(a1+a2)/2.0
}

func findKthNums(nums1 []int, i int, nums2 []int, j int, k int) int {
	if i >= len(nums1) {
		return nums2[j+k-1]
	}
	if j >= len(nums2) {
		return nums1[i+k-1]
	}

	if 1 == k {
		return Min(nums1[i], nums2[j])
	}

	l, r := INT_MAX, INT_MAX
	if i+k/2-1 < len(nums1) {
		l = nums1[i+k/2-1]
	}
	if j+k/2-1 < len(nums2) {
		r = nums2[j+k/2-1]
	}
	if l < r {
		return findKthNums(nums1, i+k/2, nums2, j, k-k/2)
	} else {
		return findKthNums(nums1, i, nums2, j+k/2, k-k/2)
	}
}

func findKthNums1(nums1 []int, nums2 []int, k int) int {
	if len(nums1) == 0 && k<=len(nums2) {
		return nums2[k-1]
	}
	if len(nums2) == 0 && k<=len(nums1) {
		return nums1[k-1]
	}

	if k==1 {
		return Min(nums1[0], nums2[0])
	}

	l, r, m := INT_MAX, INT_MAX, k/2
	if m-1 < len(nums1) {
		l = nums1[m-1]
	}
	if m-1 < len(nums2) {
		r = nums2[m-1]
	}

	if l<r {
		return findKthNums1(nums1[m:], nums2, k-m)
	} else {
		return findKthNums1(nums1, nums2[m:], k-m)
	}
}

func Min(x, y int) int {
    if x < y {
        return x
    }
    return y
}