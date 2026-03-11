#include <stdio.h>

int main(void) {
    int a[4];
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    char str[100001];
    scanf("%s", str);
    int w = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        w += a[str[i] - '1'];
    }
    printf("%d\n", w);
    return 0;
}
