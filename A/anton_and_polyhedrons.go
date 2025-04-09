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
    fmt.Scan(&n)
    p := 0

    
    for n > 0 {
        var str string
        fmt.Scan(&str)
        p = p + m[str]
        n = n - 1
    }

    fmt.Println(p)
}
