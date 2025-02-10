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

    if (n % 2) {
        cout << -1 << '\n';
    } else {
        int a = 2, b = 1;
        while (a <= n) {
            cout << a << ' ' << b << ' ';
            a += 2;
            b += 2;
        }
    }

    return 0;
}
