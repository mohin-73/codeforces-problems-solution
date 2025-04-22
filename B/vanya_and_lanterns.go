package main

import (
    "fmt"
    "sort"
)

func main() {
    var n, l int
    fmt.Scan(&n, &l)

    arr := make([]int, n)
    for i := 0 ; i < n; i += 1 {
        fmt.Scan(&arr[i])
    }
    sort.Ints(arr)

    var ans, k float64
    ans = float64(arr[0])
    ans = max(ans, float64(l - arr[n - 1]))

    for i := 1; i < n; i += 1 {
        k = float64(arr[i] - arr[i - 1])
        k = k / 2.00
        ans = max(ans, k)
    }

    fmt.Println(ans)
}
