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

    int count = 1;

    for (int i = 1; i < str.length(); i += 1) {
        if (str[i] == str[i - 1]) {
            count += 1;
            if (count == 7) {
                cout << "YES\n";
                return 0;
            }
        } else {
            count = 1;
        }
    }

    cout << "NO\n";

    return 0;
}
