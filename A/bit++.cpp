#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        x += (s[0] == '+' || s[2] == '+') ? 1 : -1;
    }
    cout << x << '\n';
    return 0;
}
