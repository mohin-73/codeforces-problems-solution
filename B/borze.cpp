#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str, ans;

    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '.') {
            ans.push_back('0');
        } else if (str[i + 1] == '.') {
            ans.push_back('1');
            ++i;
        } else {
            ans.push_back('2');
            ++i;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
