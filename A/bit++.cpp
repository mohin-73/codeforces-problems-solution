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

    while (n--) {
        string str;
        cin >> str;

        if (str[0] == '+' || str[2] == '+') {
            ans += 1;
        } else {
            ans -= 1;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
