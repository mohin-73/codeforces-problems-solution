#include <stdio.h>
#include <string.h>

#define MX 4001

int max(int x, int y) {
    return x > y ? x : y;
}

int solve(int n, int a, int b, int c, int* dp) {
    if (n == 0) {
        return 0;
    }

    if (n < 0) {
        return -MX;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    int aa = 1 + solve(n - a, a, b, c, dp);
    int bb = 1 + solve(n - b, a, b, c, dp);
    int cc = 1 + solve(n - c, a, b, c, dp);

    return dp[n] = max(aa, max(bb, cc));
}

int main(void) {
    int n, a, b, c, dp[MX];
    memset(dp, -1, sizeof(dp));

    scanf("%d %d %d %d", &n, &a, &b, &c);

    printf("%d\n", solve(n, a, b, c, dp));

    return 0;
}
