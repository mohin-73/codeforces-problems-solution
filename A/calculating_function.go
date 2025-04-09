package main

import (
    "fmt"
)

func main() {
    var n int64
    fmt.Scan(&n)

    if n % 2 == 0 {
        fmt.Println(n / 2)
    } else {
        n = (0 - n - 1)
        fmt.Println(n / 2)
    }
    
}