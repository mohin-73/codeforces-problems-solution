#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    string str[n + 1];

    for (int i = 0; i <= n; ++i) {
        int space = (n - i) * 2;

        string s(space, ' ');

        for (int j = 0; j <= i; ++j) {
            s += to_string(j) + " ";
        }

        for (int j = i - 1; j >= 0; --j) {
            s += to_string(j) + " ";
        }
        
        if (s.back() == ' ') {
            s.pop_back();
        }
        
        str[i] = s;
    }

    for (int i = 0; i <= n; ++i) {
        cout << str[i] << '\n';
    }

    for (int i = n - 1; i >= 0; --i) {
        cout << str[i] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
