#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    if (n % 2 != 0) {
        cout << -1 << '\n';
        return;
    }

    int odd = 1, even = 2;

    while (even < n) {
        cout << even << ' ' << odd << ' ';

        odd += 2;
        even += 2;
    }

    cout << even << ' ' << odd << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
