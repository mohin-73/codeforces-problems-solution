#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x{};
    string str;

    cin >> n;

    while (n--) {
        cin >> str;
        auto k = str.find('+');
        k != string::npos ? ++x : --x;
    }

    cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
