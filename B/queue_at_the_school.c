#include <stdio.h>
#include <string.h>

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);

    char str[51];
    scanf("%s", str);

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (str[j] == 'B' && str[j + 1] == 'G') {
                str[j] = 'G';
                str[j + 1] = 'B';
                j += 1;
            }
        } 
    }

    printf("%s\n", str);

    return 0;
}
