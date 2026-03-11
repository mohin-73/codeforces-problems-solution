#include <stdio.h>

int main(void) {
    int n, x = 0;
    scanf("%d", &n);
    char s[4];
    for (int i = 0; i < n; ++i) {
        scanf("%s", s);
        x += (s[0] == '+' || s[2] == '+') ? 1 : -1;
    }
    printf("%d\n", x);
    return 0;
}
