package main

import (
    "fmt"
    "sort"
)

func main()  {
    var t int
    fmt.Scan(&t)
    for i := 0; i < t; i += 1 {
        arr := make([]int, 3)
        fmt.Scan(&arr[0], &arr[1], &arr[2])

        sort.Ints(arr)
        fmt.Println(arr[1])
    }
}
