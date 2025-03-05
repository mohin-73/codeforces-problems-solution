#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    string str, ans;
    map<string, int> mp;
    int mx = 0;

    while (n--) {
        cin >> str;
        mp[str]++;
        if (mp[str] > mx) {
            ans = str;
            mx = mp[str];
        }
    }

    cout << ans << '\n';

    return 0;
}
