#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int w;
    scanf("%d", &w);
    bool f = !(w % 2) && w > 2;
    puts(f ? "YES" : "NO");
    return 0;
}
