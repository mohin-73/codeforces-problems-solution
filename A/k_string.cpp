#include <bits/stdc++.h>

using namespace std;

void solve() {
    int k;
    string str;

    cin >> k >> str;

    vector<int> freq(26, 0);

    for (char ch : str) {
        ++freq[ch - 'a'];
    }

    string s;
    int cnt = 0;

    for (int i = 0; i < 26; ++i) {
        if (freq[i] % k != 0) {
            cout << -1 << '\n';
            return;
        }

        if (freq[i]) {
            int x = freq[i] / k;

            while (x--) {
                s.push_back(i + 'a');
            }
        }
    }

    string ans;

    while (k--) {
        ans += s;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
