#include <bits/stdc++.h>

using namespace std;

void solve() {
    int s;
    set<int> st;

    for (int i = 0; i < 4; ++i) {
        cin >> s;
        st.insert(s);
    }

    cout << 4 - st.size() << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
