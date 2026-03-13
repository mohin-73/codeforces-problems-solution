#include <stdio.h>

void solve() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int first = a + (c + 1) / 2;
    int second = b + c / 2;
    puts((first > second ? "First" : "Second"));
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
