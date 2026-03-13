#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    char c;
    bool bw = true;
    for (int i = 0; i < n * m; ++i) {
        cin >> c;
        bw &= !(c == 'C' || c == 'M' || c == 'Y');
    }
    cout << (bw ? "#Black&White\n" : "#Color\n");
    return 0;
}
