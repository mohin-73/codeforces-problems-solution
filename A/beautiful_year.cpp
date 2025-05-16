#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int year;
    cin >> year;

    while (true) {
        year += 1;
        int temp = year;
        set<int> digits;

        while (temp) {
            digits.insert(temp % 10);
            temp /= 10;
        }

        if (digits.size() == 4) {
            break;
        }
    }

    cout << year << '\n';

    return 0;
}
