package main

import (
    "fmt"
)

func main() {
    var n, q int

	fmt.Scan(&n)
	arr := make([]int, n)
	for i := 0; i < n; i += 1 {
		fmt.Scan(&arr[i])
	}

	fmt.Scan(&q)
	qrr := make([]int, q)
	for i := 0; i < q; i += 1 {
		fmt.Scan(&qrr[i])
	}

    a := make([]int, n)
	b := make([]int, n)

	a[0] = 0
	b[0] = arr[0]

	for i := 1; i < n; i += 1 {
		a[i] = b[i - 1] + 1
		b[i] = b[i - 1] + arr[i]
	}

	for i := 0; i < q; i += 1 {
		k := qrr[i]
		low := 0
		high := n - 1
		for low <= high {
			mid := (low + high) / 2
			if k >= a[mid] && k <= b[mid] {
				fmt.Println(mid + 1)
				break
			} else if b[mid] >= k {
				high = mid - 1
			} else {
				low = mid + 1
			}
		}
	}
}
