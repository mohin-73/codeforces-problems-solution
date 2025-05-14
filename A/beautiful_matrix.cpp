#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int cell, row, col;
    
    for (int i = 1; i <= 5; i += 1) {
        for (int j = 1; j <= 5; j += 1) {
            cin >> cell;
            if (cell == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 3) + abs(col - 3) << '\n';

    return 0;
}

// Manhattan Distance = |x1 - x2| + |y1 - y2|
