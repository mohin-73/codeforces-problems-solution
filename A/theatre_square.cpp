#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a;
    cin >> n >> m >> a;
    n = (n + a - 1) / a;
    m = (m + a - 1) / a;
    cout << 1LL * n * m << '\n';
    return 0;
}
