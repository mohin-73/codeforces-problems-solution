#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (++n) {
        int t = n, arr[10] = {0};
        while (t && !arr[t % 10]) {
            arr[t % 10] = 1;
            t /= 10;
        }
        if (t == 0) {
            break;
        }
    }
    printf("%d", n);
}
