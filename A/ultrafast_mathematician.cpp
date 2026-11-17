#include <bits/stdc++.h>

using namespace std;

void solve() {
    string num1, num2;

    cin >> num1 >> num2;

    string ans;

    for (int i = 0; i < num1.length(); ++i) {
        if (num1[i] == num2[i]) {
            ans.push_back('0');
        } else {
            ans.push_back('1');
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
