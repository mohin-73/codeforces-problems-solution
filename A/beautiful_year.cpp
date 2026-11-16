#include <bits/stdc++.h>

using namespace std;

void solve() {
    int year;

    cin >> year;

    while (++year) {
        int temp = year;
        int d = 0;
        set<int> digits;

        while (temp) {
            digits.insert(temp % 10);
            temp /= 10;
            d += 1;
        }

        if (digits.size() == d) {
            break;
        }
    }

    cout << year << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
