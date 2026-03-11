#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    string str;
    cin >> str;
    int w = 0;
    for (char ch : str) {
        w += a[ch - '1'];
    }
    cout << w << '\n';
    return 0;
}
