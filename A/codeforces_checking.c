#include <stdio.h>
#include <stdbool.h>

void solve() {
    char cf[11] = "codeforces";
    char ch;
    bool found = false;
    scanf(" %c", &ch);
    for (int i = 0; i < strlen(cf); ++i) {
        if (ch == cf[i]) {
            found = true;
            break;
        }
    }
    puts(found ? "YES" : "NO");
}

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
