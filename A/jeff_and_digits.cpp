#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;

    cin >> n;

    int five = 0, zero = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        five += x == 5;
        zero += x == 0;
    }

    if (zero == 0) {
        cout << -1 << '\n';
        return;
    } else if (five < 9) {
        cout << 0 << '\n';
        return;
    }

    x = five % 9;
    five -= x;

    string fives(five, '5');
    string zeros(zero, '0');

    cout << fives + zeros << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
