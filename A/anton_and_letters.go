package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {
    var str string
    reader := bufio.NewReader(os.Stdin)
    str, _ = reader.ReadString('\n')

    cnt := 0
    arr := make([]int, 26)

    for i := 0; i < len(str); i++ {
        if str[i] >= 'a' && str[i] <= 'z' {
            k := str[i] - 'a'
            if arr[k] == 0 {
                cnt++
                arr[k] = 1
            }
        }
    }

    fmt.Println(cnt)
}
