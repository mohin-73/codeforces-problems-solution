package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scan(&n)

    arr := [5]int{100, 20, 10, 5, 1}
    p := 0
    
    for i := 0; i < 5; i++ {
        p = p + (n / arr[i])
        n = n % arr[i]
    }

    fmt.Println(p)
}
