#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<int> v(7);

    int sum = 0;

    for (int i = 0; i < 7; ++i) {
        cin >> v[i];
        sum += v[i];
    }

    if (n % sum) {
        n = n % sum;
    } else {
        n = sum;
    }

    for (int i = 0; i < 7; ++i) {
        if (v[i] >= n) {
            cout << i + 1 << '\n';
            break;
        } else {
            n = n - v[i];
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
