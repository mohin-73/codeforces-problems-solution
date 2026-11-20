#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    string hello = "hello";

    int curr = 0, idx = 0;

    while (idx < str.length() && curr < hello.length()) {
        if (str[idx++] == hello[curr]) {
            ++curr;
        }
    }

    if (curr == hello.length()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
