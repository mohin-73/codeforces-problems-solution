#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << n;

    for (int i = 1; i < n; i += 1) {
        cout << ' ' << i;
    }
    
    cout << '\n';

    return 0;
}
