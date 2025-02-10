#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int x, sum = 0;
    for (int i = 0; i < n; i += 1) {
        cin >> x;
        sum += x;
    }
    
    cout << double(sum) / n << endl;

    return 0;
}
