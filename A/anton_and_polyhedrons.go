package main

import (
    "fmt"
)

func main() {
    m := map[string]int {
        "Tetrahedron": 4,
        "Cube":        6,
        "Octahedron":  8,
        "Dodecahedron": 12,
        "Icosahedron": 20,
    }

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
