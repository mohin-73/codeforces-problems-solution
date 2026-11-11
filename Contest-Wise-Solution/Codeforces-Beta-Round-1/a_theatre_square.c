#include <stdio.h>

int main(void) {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long r = (n + a - 1) / a;
    long long c = (m + a - 1) / a;

    printf("%lld\n", r * c);

    return 0;
}
