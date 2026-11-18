#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a, b, c;

    cin >> n;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        
        count += (a + b + c) > 1;
    }
    
    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
