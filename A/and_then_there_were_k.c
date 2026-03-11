#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int p = 0;
    while (n > 1) {
        ++p;
        n >>= 1;
    }
    printf("%d\n", (1 << p) - 1);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
