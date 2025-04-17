package main

import (
    "fmt"
)

func main() {
    var t int
    fmt.Scan(&t)

    for t > 0 {
        var a, b, k int64
        fmt.Scan(&a, &b)
        k = (a + b - 1) / b
        b = b * k
        fmt.Println(b - a)
        t = t - 1
    }
}
