#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    int x = 0;

    cin >> n;

    while (n > 0) {
        x += n % 10 == 4 || n % 10 == 7;
        n /= 10;
    }

    if (x == 4 || x == 7) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
