#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str, ans{};
    getline(cin, str);
    for (int i = 1; i < str.length(); ++i) {
        if (str[i - 1] == ' ') ans += str[i];
    }
    cout << str[0] + ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
    }
    return 0;
}
