#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (++n) {
        string s = to_string(n);
        set<char> st(s.begin(), s.end());
        if (st.size() == s.size()) {
            break;
        }
    }
    cout << n << '\n';
    return 0;
}
