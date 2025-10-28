package main

import "fmt"

func main() {
    var n int
    fmt.Scan(&n)
    for i := 0; i < n; i++ {
        var str string
        fmt.Scan(&str)
        l := len(str)
        if l <= 10 {
            fmt.Println(str)
        } else {
            fmt.Printf("%c%d%c\n", str[0], l - 2, str[l - 1])
        }
    }
}
