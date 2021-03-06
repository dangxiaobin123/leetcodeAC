package problem0001

import (
	"testing"
	"github.com/stretchr/testify/assert"
)

type para struct {
	one []int
	two int
}

type ans struct {
	one []int
}

type question struct {
	p para
	a ans
}

func Test_0001(t *testing.T) {
	ast := assert.New(t)

	qs := []question{
		question{
			p: para{
				one: []int{3, 2, 4},
				two: 6,
			},
			a: ans{
				one: []int{1, 2},
			},
		},
		question{
			p: para{
				one: []int{3, 2, 4},
				two: 8,
			},
			a: ans{
				one: nil,
			},
		},
		question{
			p: para{
				one: []int{2, 7, 11, 15},
				two: 9,
			},
			a: ans{
				one: []int{0, 1},
			},
		},
	}

	for _, q := range qs {
		a, p := q.a, q.p
		ast.Equal(a.one, twoSum(p.one, p.two), "输入:%v", p)
	}
}