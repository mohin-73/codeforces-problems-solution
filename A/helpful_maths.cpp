#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    int a = 0, b = 0;

    for (char ch : str) {
        a += ch == '1';
        b += ch == '2';
    }

    for (int i = 0; i < str.length(); i += 2) {
        if (a > 0) {
            str[i] = '1';
            --a;
        } else if (b > 0) {
            str[i] = '2';
            --b;
        } else {
            str[i] = '3';
        }
    }

    cout << str << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
