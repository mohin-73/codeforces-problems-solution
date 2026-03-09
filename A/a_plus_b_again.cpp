#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    short t;
    cin >> t;
    while (t--) {
        short n;
        cin >> n;
        cout << (n % 10) + ((n / 10) % 10) << '\n';
    }
    return 0;
}
