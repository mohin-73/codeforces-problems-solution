#include <bits/stdc++.h>

using namespace std;

void solve() {
    int year;

    cin >> year;

    while (++year) {
        int temp = year;
        int digits = 0;
        set<int> st;

        while (temp) {
            st.insert(temp % 10);
            temp /= 10;
            ++digits;
        }

        if (st.size() == digits) {
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
