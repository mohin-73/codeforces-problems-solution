#include <stdio.h>

int main() {
    int w;
    scanf("%d", &w);
    puts((!(w % 2) && w > 2) ? "YES" : "NO");
    return 0;
}
