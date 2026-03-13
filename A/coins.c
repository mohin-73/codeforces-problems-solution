#include <stdio.h>

void solve() {
    long long n, k;
    scanf("%lld %lld", &n, &k);
    if (n % k == 0 || (n - k) % 2 == 0 || n % 2 == 0) {
        puts("YES");
    } else {
        puts("NO");
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
