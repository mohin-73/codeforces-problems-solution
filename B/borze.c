#include <stdio.h>
#include <string.h>

int main(void) {
    char str[201];
    char ans[201];
    int i, len, j = 0;

    scanf("%s", str);
    len = (int)strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == '.') {
            ans[j++] = '0';
        } else if (str[i + 1] == '-') {
            ans[j++] = '2';
            i += 1;
        } else {
            ans[j++] = '1';
            i += 1;
        }
    }

    ans[j] = '\0';
    printf("%s\n", ans);

    return 0;
}
