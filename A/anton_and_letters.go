package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    reader := bufio.NewReader(os.Stdin)
    str, _ := reader.ReadString('\n')

    count, seen := 0, make([]bool, 26)

    for i := 0; i < len(str); i++ {
        if str[i] >= 'a' && str[i] <= 'z' {
            idx := str[i] - 'a'
            if !seen[idx] {
                count += 1
                seen[idx] = true
            }
        }
    }

    fmt.Println(count)
}
