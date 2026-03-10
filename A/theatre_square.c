#include <stdio.h>

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    n = (n + a - 1) / a;
    m = (m + a - 1) / a;
    long long f = 1LL * n * m;
    printf("%lld\n", f);
    return 0;
}
