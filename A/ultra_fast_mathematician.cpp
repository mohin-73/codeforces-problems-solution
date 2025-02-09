#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str1, str2, str;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i += 1) {
        if (str1[i] == str2[i]) {
            str += '0';
        } else {
            str += '1';
        }
    }

    cout << str << '\n';

    return 0;
}
