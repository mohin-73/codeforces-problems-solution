package main

import (
    "fmt"
)

func main()  {
    var t int
    fmt.Scan(&t)

    for t > 0 {
        var n, k int64
        fmt.Scan(&n, &k)

        x := (k * n) / (n - 1)
        if x % n == 0 {
            x -= 1
        }

        fmt.Println(x)
        t--
    }
}
