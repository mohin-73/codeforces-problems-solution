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

    n = n - 10;

    if (n <= 0 or n > 11) {
        cout << 0 << '\n';
    } else if (n == 10) {
        cout << 15 << '\n';
    } else {
        cout << 4 << '\n';
    }
    
    return 0;
}
