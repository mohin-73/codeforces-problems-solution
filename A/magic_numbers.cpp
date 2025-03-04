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

    for (int i = 0; i < str.length(); i += 1) {
        if (str[i] != '1') {
            cout << "NO\n";
            return 0;
        }
        if (str[i + 1] == '4') i += 1;
        if (str[i + 1] == '4') i += 1;
    }

    cout << "YES\n";
    
    return 0;
}
