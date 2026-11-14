#include <stdio.h>

void solve(void) {
    int n;
    scanf("%d", &n);

    printf("%d ", n);

    while (n > 1) {
        int d = n;

        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                d = i;
                break;
            }
        } 

        n /= d;
        printf("%d ", n);
    }

    printf("\n");
}

int main(void) {

    solve();

    return 0;
}
