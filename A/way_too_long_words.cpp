#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        if (str.length() <= 10) {
            cout << str << '\n';
        } else {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << '\n';
        }
    }

    return 0;
}
