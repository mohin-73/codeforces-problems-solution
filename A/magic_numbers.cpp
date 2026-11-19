#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    int i = 0, n = str.length();

    while (i < n) {
        if (str[i] != '1') {
            cout << "NO\n";
            return;
        }

        ++i;

        if (i < n && str[i] == '4') {
            ++i;
        }

        if (i < n && str[i] == '4') {
            ++i;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
