#include <stdio.h>

void solve() {
    int n, a;
    scanf("%d", &n);
    int s = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        s += a;
    }

    if (s % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
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
