#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        if (str.length() <= 10) {
            cout << str << '\n';
            continue;
        }
        auto l = str.length();
        cout << str[0] << l - 2 << str[l - 1] << '\n';
    }
    return 0;
}
