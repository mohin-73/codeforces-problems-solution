#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int pos;
    bool matrix[5][5];
    memset(matrix, true, sizeof(matrix));

    for (int i = 1; i <= 3; i += 1) {
        for (int j = 1; j <= 3; j += 1) {
            cin >> pos;
            if (pos % 2) {
                matrix[i][j] = !matrix[i][j];
                matrix[i + 1][j] = !matrix[i + 1][j];
                matrix[i - 1][j] = !matrix[i - 1][j];
                matrix[i][j + 1] = !matrix[i][j + 1];
                matrix[i][j - 1] = !matrix[i][j - 1];

            }
        }
    }

    for (int i = 1; i <= 3; i += 1) {
        for (int j =  1; j <= 3; j += 1) {
            cout << matrix[i][j];
        }
        cout << '\n';
    }

    return 0;
}
