package main

import (
    "fmt"
)

func main() {
    m := make(map[string]int)
    m["Tetrahedron"] = 4
    m["Cube"] = 6
    m["Octahedron"] = 8
    m["Dodecahedron"] = 12
    m["Icosahedron"] = 20

    var n int
    p := 0

    fmt.Scan(&n)
    for n > 0 {
        var str string
        fmt.Scan(&str)
        p = p + m[str]
        n--
    }

    fmt.Println(p)
}
