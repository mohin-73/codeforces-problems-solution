package main
 
import (
    "fmt"
    "strings"
)
 
func main() {
    var str, ans string
    fmt.Scan(&str)

    ln := len(str)
    low := 0

    for i := 0; i < ln; i += 1 {
        if str[i] >= 'a' && str[i] <= 'z' {
            low += 1
        }
    }
    
    if str[0] >= 'a' && str[0] <= 'z' && low == 1 {
        str = strings.ToLower(str)
        ans = strings.ToUpper(str[0:1]) + str[1:]
        fmt.Println(ans)
    } else if (low == 0) {
        fmt.Println(strings.ToLower(str))
    } else {
        fmt.Println(str)
    }
}
