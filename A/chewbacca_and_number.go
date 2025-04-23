package main

import (
    "fmt"
)

func main() {
    var str string
    fmt.Scan(&str)

    a := 0
    if str[0] > '4' && str[0] < '9' {
        a = 9 - int(str[0]-'0')
    } else {
        a = int(str[0] - '0')
    }
    ans := string(a + '0')

    for i := 1; i < len(str); i++ {
        if str[i] > '4' {
            a = 9 - int(str[i]-'0')
        } else {
            a = int(str[i] - '0')
        }
        ans += string(a + '0')
    }

    fmt.Println(ans)
}
