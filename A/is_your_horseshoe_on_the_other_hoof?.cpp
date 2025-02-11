#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<int> s;

    for (int i = 0; i < 4; i += 1) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << 4 - s.size() << '\n';

    return 0;
}
