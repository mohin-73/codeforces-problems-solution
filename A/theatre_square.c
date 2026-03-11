#include <stdio.h>

int main(void) {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    n = (n + a - 1) / a;
    m = (m + a - 1) / a;
    printf("%lld\n", 1LL * n * m);
    return 0;
}
