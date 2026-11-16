#include <bits/stdc++.h>

using namespace std;

void solve() {
    int row, col, num;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> num;

            if (num == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 2) + abs(col - 2) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
