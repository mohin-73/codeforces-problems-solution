#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    while (t--) {
        for (int i = 1; i < n; i += 1) {
            if (str[i] == 'G' and str[i - 1] == 'B') {
                swap(str[i], str[i - 1]);
                i += 1;
            }
        }
    }
    
    cout << str << '\n';

    return 0;
}
