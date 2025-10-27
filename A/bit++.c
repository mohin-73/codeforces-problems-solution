#include <stdio.h>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        char s[4];
        scanf("%s", s);
        ans += (s[0] == '+' || s[2] == '+') ? 1 : -1;
    }
    printf("%d\n", ans);
    return 0;
}
