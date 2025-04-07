package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scan(&n)

    for i := 1; i < n; i++ {
        if i % 2 == 1 {
            fmt.Print("I hate that ")
        } else {
            fmt.Print("I love that ")
        }
    }

    if n % 2 == 0 {
        fmt.Println("I love it")
    } else {
        fmt.Println("I hate it")
    }
}