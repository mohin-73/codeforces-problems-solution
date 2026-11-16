#include <bits/stdc++.h>

using namespace std;

void solve() {
    bool grid[5][5];
    memset(grid, true, sizeof(grid));

    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            int press;
            cin >> press;

            int toggle = press % 2;

            grid[i][j] ^= toggle;
            grid[i + 1][j] ^= toggle;
            grid[i - 1][j] ^= toggle;
            grid[i][j + 1] ^= toggle;
            grid[i][j - 1] ^= toggle;
        }
    }

    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << grid[i][j];
        }

        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
