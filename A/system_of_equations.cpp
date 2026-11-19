#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    int count = 0;

    for (int a = 0; a * a <= n; ++a) {
        int aa = a * a;
        int b = n - aa;
        int bb = b * b;

        if (aa + b == n && a + bb == m) {
            ++count;
        }
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
