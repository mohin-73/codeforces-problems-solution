#include <stdio.h>

int main() {
    int t, a, b, c;
    scanf("%d", &t);
    for (int i = 0; i < t; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        int first = a + (c + 1) / 2;
        int second = b + c / 2;
        puts((first > second ? "First" : "Second"));
    }
    return 0;
}
