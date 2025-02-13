#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int x, addr[100001];
    for (int i = 0; i < n; i += 1) {
        cin >> x;
        addr[x] = i + 1;
    }

    int m, q;
    cin >> m;
    long long v = 0, p = 0;
    for (int i = 0; i < m; i += 1) {
        cin >> q;
        v += addr[q] + 0LL;
        p += n - addr[q] + 1LL;
    }

    cout << v << ' ' << p << '\n';
    
    return 0;
}
