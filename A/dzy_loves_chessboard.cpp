#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    char mat[n][m];

    for (int i = 0; i < n; i += 1) {
        if (i % 2) {
            for (int j = 0; j < m; j += 1) {
                if (j % 2) {
                    mat[i][j] = 'B';
                } else {
                    mat[i][j] = 'W';
                }
            }
        }
        else {
            for (int j = 0; j < m; j += 1) {
                if (j % 2) {
                    mat[i][j] = 'W';
                } else {
                    mat[i][j] = 'B';
                }
            }
        }
    }

    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < m; j += 1) {
            char ch;
            cin >> ch;
            if (ch =='-') {
                mat[i][j] = ch;
            }
        }
    }

    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < m; j += 1) {
            cout << mat[i][j];
        }
        cout << '\n';
    }

    return 0;
}
