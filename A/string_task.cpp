#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    string ans = "";

    for (int i = 0; i < str.length(); i += 1) {
        if (str[i] != 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i] != 'u' and str[i] != 'y') {
            ans = ans + '.' + str[i];
        }
    }

    cout << ans << '\n';

    return 0;
}
