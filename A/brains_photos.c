#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    char c;
    bool bw = true;
    for (int i = 0; i < n * m; i++) {
        scanf(" %c", &c);
        bw &= !(c == 'C' || c == 'M' || c == 'Y');
    }
    puts(bw ? "#Black&White" : "#Color");
    return 0;
}
