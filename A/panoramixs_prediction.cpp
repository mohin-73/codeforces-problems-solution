#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void solve() {
    int n, m;

    cin >> n >> m;

    while (!isPrime(++n));

    cout << (n == m ? "YES\n" : "NO\n");

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}