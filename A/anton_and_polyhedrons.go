package main

import (
    "fmt"
)

func main() {
    m := map[string]int{
        "Tetrahedron":  4,
        "Cube":         6,
        "Octahedron":   8,
        "Dodecahedron": 12,
        "Icosahedron":  20,
    }

    var n int
    fmt.Scan(&n)

    sum := 0
    for i := 0; i < n; i++ {
        var shape string
        fmt.Scan(&shape)
        sum += m[shape]
    }

    fmt.Println(sum)
}
