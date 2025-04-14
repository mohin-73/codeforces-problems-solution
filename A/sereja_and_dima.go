package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)

    arr := make([]int, n)
    for i := 0; i < n; i++ {
        fmt.Scan(&arr[i])
    }

    a, b := 0, 0
    i, j := 0, n-1
    f := true

    for i <= j {
        if f {
            if arr[i] >= arr[j] {
                a += arr[i]
                i++
            } else {
                a += arr[j]
                j--
            }
        } else {
            if arr[i] >= arr[j] {
                b += arr[i]
                i++
            } else {
                b += arr[j]
                j--
            }
        }
        f = !f
    }

    fmt.Println(a, b)
}
