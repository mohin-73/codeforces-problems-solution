#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        char str[101];
        scanf("%s", str);
        if (strlen(str) <= 10) {
            printf("%s\n", str);
            continue;
        }
        size_t l = strlen(str);
        printf("%c%zu%c\n", str[0], l - 2, str[l - 1]);
    }
    return 0;
}
