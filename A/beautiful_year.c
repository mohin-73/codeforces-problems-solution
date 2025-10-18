#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    scanf("%d", &n);

    while(++n) {
        int t = n, arr[10] = {0};
        bool flag = true;

        while(t) {
            if (arr[t % 10]) {
                flag = false;
                break;
            }
            arr[t % 10] = true;
            t /= 10;
        }

        if (flag) {
            break;
        }
    }

    printf("%d\n", n);

    return 0;
}
