#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str, op;
    cin >> str;

    for (int i = 0; i < str.length(); i += 1) {
        if (str[i] == '.') {
            op += '0';
        } else if (str[i + 1] == '-') {
            op += '2';
            i += 1;
        } else {
            op += '1';
            i += 1;
        }
    }

    cout << op << '\n';
    
    return 0;
}
