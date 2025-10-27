#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char str[101];
        scanf("%s", str);
        if (strlen(str) <= 10) {
            printf("%s\n", str);
            continue;
        }
        size_t len = strlen(str);
        printf("%c%zu%c\n", str[0], len - 2, str[len - 1]);
    }
    return 0;
}
