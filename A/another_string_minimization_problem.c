#include <stdio.h>

void solve() {
    int n, m, a, b;
    scanf("%d %d", &n, &m);
    char s[m + 1];
    for (int i = 0; i < m; ++i) {
        s[i] = 'B';
    }
    s[m] = '\0';
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a);
        b = m - a--;
        int l = a < b ? a : b;
        int r = a > b ? a : b;
        s[l] == 'B' ? (s[l] = 'A') : (s[r] = 'A');
    }
    printf("%s\n", s);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
