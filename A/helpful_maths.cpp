#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str, s;
    cin >> str;

    for (int i = 0; i < str.length(); i += 1) {
        if (str[i] != '+') {
            s += str[i];
        }
    }
    
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length() - 1; i += 1) {
        cout << s[i] << '+';
    }
    cout << s[s.length() - 1] << endl;

    return 0;
}
