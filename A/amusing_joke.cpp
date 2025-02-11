#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    string str = str1 + str2;

    sort(str.begin(), str.end());
    sort(str3.begin(), str3.end());

    if (str == str3) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
