#include <stdio.h>

void solve(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = k + 1; i > 0; --i) {
        printf("%d ", i);
    }

    for (int i = k + 2; i <= n; ++i) {
        printf("%d ", i);
    }
    
    printf("\n");
}

int main(void) {

    solve();

    return 0;
}
