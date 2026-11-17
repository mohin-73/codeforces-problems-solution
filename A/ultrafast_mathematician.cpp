#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str1, str2;

    cin >> str1 >> str2;

    string str;
    int len = str1.length();

    for (int i = 0; i < len; ++i) {
        if (str1[i] == str2[i]) {
            str.push_back('0');
        } else {
            str.push_back('1');
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
