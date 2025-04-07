package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scan(&n)

    var p, q, k int
    cnt := 0
    var arr[100]int

    fmt.Scan(&p)
    for p > 0 {
        fmt.Scan(&k)
        if arr[k - 1] == 0 {
            cnt += 1
            arr[k - 1] = 1
        }
        p--
    }

    fmt.Scan(&q)
    for q > 0 {
        fmt.Scan(&k)
        if arr[k - 1] == 0 {
            cnt += 1
            arr[k - 1] = 1
        }
        q--
    }

    if cnt == n {
        fmt.Println("I become the guy.")
    } else {
        fmt.Println("Oh, my keyboard!")
    }
}
