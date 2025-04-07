package main

import (
    "fmt"
)

func main() {
    var n, p, x int
    fmt.Scan(&n, &p)

    ans := 1

    for i := 1; i < n; i++ {
        fmt.Scan(&x)
        if x != p {
            ans += 1
        }
        p = x
    }

    fmt.Println(ans)
}