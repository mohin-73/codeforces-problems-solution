#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str1, str2, str3;
    vector<int> freq(26, 0);

    cin >> str1 >> str2 >> str3;

    for (char ch : str1) {
        ++freq[ch - 'A'];
    }

    for (char ch : str2) {
        ++freq[ch - 'A'];
    }

    for (char ch : str3) {
        --freq[ch - 'A'];
    }

    for (int f : freq) {
        if (f != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
