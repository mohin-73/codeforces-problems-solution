#include <stdio.h>
#include <math.h>

void solve() {
    int v, m;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &v);
            if (v == 1) {
                m = abs(i - 3) + abs(j - 3);
            }
        }
    }
    printf("%d\n", m);
}

int main(void) {
    solve();
    return 0;
}
