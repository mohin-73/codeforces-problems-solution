#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w;
    cin >> w;
    bool f = !(w % 2) && w > 2;
    cout << (f ? "YES\n" : "NO\n");
    return 0;
}
