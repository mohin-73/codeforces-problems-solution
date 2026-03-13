#include <stdio.h>

int main(void) {
    int n, x, y, z, fx, fy, fz;
    x = y = z = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &fx, &fy, &fz);
        x += fx; y += fy; z += fz;
    }
    printf((x || y || z) ? "NO\n" : "YES\n");
}
