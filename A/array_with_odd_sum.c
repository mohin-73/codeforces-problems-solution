#include <stdio.h>

void solve() {
    int n, a;
    scanf("%d", &n);
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        odd += a % 2;
    }
    if (odd == 0 || (odd == n && !(n % 2))) {
        printf("NO\n");
    } else {
        printf("YES\n");
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
