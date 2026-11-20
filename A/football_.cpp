#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    int count = 1;

    for (int i = 0; i + 1 < str.length(); ++i) {
        if (str[i] == str[i + 1]) {
            if (++count == 7) {
                cout << "YES\n";
                return;
            }
        } else {
            count = 1;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
