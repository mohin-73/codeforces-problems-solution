#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int row, col, cell;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> cell;
            if (cell == 1) {
                row = i + 1;
                col = j + 1;
            }
        }
    }

    cout << abs(row - 3) + abs(col - 3) << '\n';

    return 0;
}

/*
    Manhattan Distance = |x1 - x2| + |y1 - y2|
*/