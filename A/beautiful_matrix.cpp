#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int v, m;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> v;
            if (v == 1) {
                m = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << m << '\n';
    return 0;
}
