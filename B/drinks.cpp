#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, p;
    
    cin >> n;

    double sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> p;
        sum += p;
    }

    cout << sum / n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
