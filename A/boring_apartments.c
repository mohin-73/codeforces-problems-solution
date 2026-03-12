#include <stdio.h>

void solve() {
    int x;
    scanf("%d", &x);
    int p = (x % 10 - 1) * 10;
    char s[5];
    sprintf(s, "%d", x);
    int d = strlen(s);
    p += (d * (d + 1)) / 2;
    printf("%d\n", p);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
