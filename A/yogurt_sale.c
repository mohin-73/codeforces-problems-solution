#include <stdio.h>

void solve() {
    int n, a, b, c = 0;
    scanf("%d %d %d", &n, &a, &b);
    if (b < 2 * a) {
        c += b * (n / 2);
        n = n % 2;
    }
    c += n * a;
    printf("%d\n", c);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
