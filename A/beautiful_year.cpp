#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int y;
    cin >> y;

    while (true) {
        int n = ++y;
        set<int> s;
        while (n) {
            s.insert(n % 10);
            n /= 10;
        }
        if (s.size() == 4) {
            break;
        }
    }

    cout << y << '\n';
    
    return 0;
}
