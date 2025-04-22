package main

import (
    "fmt"
)

func c1(n int, m int, a int, b int) int {
    k := (n + m - 1) / m
    k = k * b
    return k
}

func c2(n int, m int, a int, b int) int {
    k := n / m
    k = k * b + ((n % m) * a)
    return k
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}

func main() {
    var n, m, a, b int
    fmt.Scan(&n, &m, &a, &b)

    ans := n * a
    ans = min(ans, c1(n, m, a, b))
    ans = min(ans, c2(n, m, a, b))

    fmt.Println(ans)
}
