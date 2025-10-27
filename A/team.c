#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        ans += (a + b + c > 1 ? 1 : 0);
    }
    printf("%d\n", ans);
    return 0;
}
