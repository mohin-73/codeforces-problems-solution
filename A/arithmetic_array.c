#include <stdio.h>

void solve() {
    int n, a;
    scanf("%d", &n);
    int s = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        s += a;
    }
    if (n == s) {
        printf("0\n");
    } else if (s < 0 || n > s) {
        printf("1\n");
    } else {
        printf("%d\n", s - n);
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
