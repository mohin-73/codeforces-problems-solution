#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, s, a, b, c, d;
    a = b = c = d = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == 4) ++d;
        else if (s == 3) ++c;
        else if (s == 2) ++b;
        else ++a;
    }
    d += c;
    a -= min(a, c);
    d += (b / 2);
    if (b % 2) {
        ++d;
        a -= 2;
    }
    if (a > 0) {
        d += (a + 3) / 4;
    }
    cout << d << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
