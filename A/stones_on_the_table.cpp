#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string str;

    cin >> n >> str;

    int count = 0;

    for (int i = 0; i + 1 < n; ++i) {
        count += str[i] == str[i + 1];
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
