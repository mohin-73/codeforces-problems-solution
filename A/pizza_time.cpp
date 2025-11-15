#include <bits/stdc++.h>
 
using namespace std;

int solve() {
    int n;
    cin >> n;
    return (n - 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}
