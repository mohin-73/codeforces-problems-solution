#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n, a;
    scanf("%d %d", &n, &a);
    int v, x, y, l = 0, r = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v);
        if (v == a) {
            continue;
        }
        x = abs(v - a - 1);
        y = abs(v - a + 1);
        x > y ? ++l : ++r;
    }
    printf("%d\n", (l > r ? --a : ++a));
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
