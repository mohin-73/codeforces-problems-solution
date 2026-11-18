#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n, k;

    cin >> n >> k;

    long long odd = (n + 1) / 2;

    if (k > odd) {
        cout << (k - odd) * 2 << '\n';
    } else {
        cout << k * 2 - 1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
