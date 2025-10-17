#include <stdio.h>
#include <math.h>

int main(void) {
    int row, col;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            scanf("%d", &x);
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int dist = abs(row - 3) + abs(col - 3);
    printf("%d\n", dist);

    return 0;
}
