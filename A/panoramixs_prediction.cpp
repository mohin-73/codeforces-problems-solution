#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    int x = sqrt(n + 1);

    for (int i = 2; i <= x; i += 1) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m, k;
    cin >> n >> m;
    k = n + 1;

    while (isPrime(k) == false) {
        k += 1;
    }

    if (k == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
