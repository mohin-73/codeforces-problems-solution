#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    vector<string> matrix(n);

    for (int i = 0; i < n; ++i) {
        string s;

        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j) {
                if (j % 2 == 0) {
                    s.push_back('W');
                } else {
                    s.push_back('B');
                }
            }
        } else {
            for (int j = 0; j < m; ++j) {
                if (j % 2 == 0) {
                    s.push_back('B');
                } else {
                    s.push_back('W');
                }
            }
        }

        matrix[i] = s;
    }

    char ch;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> ch;

            if (ch == '-') {
                matrix[i][j] = ch;
            }
        }
    }

    for (string row : matrix) {
        cout << row << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
