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

    int week[7], s = 0;
    for (int i = 0; i < 7; i += 1) {
        cin >> week[i];
        s += week[i];
    }

    if (n % s) {
        n %= s;
    } else {
        n = s;
    }

    for (int i = 0; i < 7; i += 1) {
        n -= week[i];
        if (n <= 0) {
            cout << i + 1 << '\n';
            return 0;
        }
    }
    
    return 0;
}
