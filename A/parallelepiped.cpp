#include <bits/stdc++.h>

using namespace std;

void solve() {
    int lw, hl, wh;

    cin >> lw >> hl >> wh;

    int l = sqrt((lw * hl) / wh);
    int h = sqrt((hl * wh) / lw);
    int w = sqrt((wh * lw) / hl);

    cout << 4 * (l + h + w) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
