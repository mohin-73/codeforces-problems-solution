#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, ans = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 1; i < str.length(); i += 1) {
        if (str[i] == str[i - 1]) {
            ans += 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
