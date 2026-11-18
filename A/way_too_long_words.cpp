#include <bits/stdc++.h>

using namespace std;

void solve() {
    string word;

    cin >> word;

    int x = word.length() - 2;

    if (x > 8) {
        cout << word.front() << x << word.back() << '\n';
    } else {
        cout << word << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        solve();
    }

    return 0;
}
