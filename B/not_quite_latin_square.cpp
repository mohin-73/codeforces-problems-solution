#include <bits/stdc++.h>

using namespace std;

void solve() {
    int missing = 0;
    for (int i = 0; i < 3; ++i) {
        string str;
        cin >> str;
        if (str.find('?') != string::npos) {
            int mask = 0;
            for (char ch : str) {
                if (ch == 'A') mask |= 1;
                else if (ch == 'B') mask |= 2;
                else if (ch == 'C') mask |= 4;
            }
            missing = 7 ^ mask;
        }
    }
    if (missing == 1) cout << 'A' << '\n';
    else if (missing == 2) cout << 'B' << '\n';
    else cout << 'C' << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
─────────────────────────────────────────────
    Solving Procedure (Bitmask Explanation)
─────────────────────────────────────────────
    A → 001 (1)
    B → 010 (2)
    C → 100 (4)
    A | B | C = 111 (7)
    A → mask |= 1
    B → mask |= 2
    C → mask |= 4
    missing = 7 ^ mask
─────────────────────────────────────────────
*/ 
