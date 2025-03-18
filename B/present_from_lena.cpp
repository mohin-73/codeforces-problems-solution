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

    string str[2 * n + 1];

    int sp = n * 2;

    for (int i = 0; i <= n; i += 1) {
        for (int s = 1 ; s <= sp; s += 1) {
            str[i] = str[i] + ' ';
        }
        sp -= 2;
        int x = 2 * i + 1;
        for (int j = 0; j <= i; j += 1) {
            x--;
            if (!x) {
                str[i] = str[i] + to_string(j);
            } else {
                str[i] = str[i] + to_string(j) + ' ';
            }
        }
        for (int j = i - 1; j >= 0; j -= 1) {
            x--;
            if (!x) {
                str[i] = str[i] + to_string(j);
            } else {
                str[i] = str[i] + to_string(j) + ' ';
            }
        }
    }

    int k = 0;

    for (int i = 2 * n; i >= n; i -= 1) {
        str[i] = str[k];
        k += 1;
    }

    for (int i = 0; i < 2 * n + 1; i += 1) {
        cout << str[i] << '\n';
    }

    return 0;
}
