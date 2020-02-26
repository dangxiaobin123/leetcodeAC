package problem0026

func removeDuplicates(a []int) int {
	p, r, size := 0, 1, len(a)
	for ; r < size; r++ {
		if !(a[r]==a[p]) {
			p++
			a[p], a[r] = a[r], a[p]
		}
	}
	return p+1
}