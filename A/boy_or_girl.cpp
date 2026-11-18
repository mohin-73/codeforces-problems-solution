#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    set<char> st(str.begin(), str.end());

    if (st.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
