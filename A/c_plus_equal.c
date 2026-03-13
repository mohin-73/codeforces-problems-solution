#include <stdio.h>

void solve() {
    long long a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    int ops = 0;
    while (a <= n && b <= n) {
        if (a >= b) {
            b += a;
        } else {
            a += b;
        }
        ++ops;
    }
    printf("%d\n", ops);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
