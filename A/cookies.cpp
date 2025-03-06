#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, sum = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
        sum += arr[i];
    }

    int cnt = 0;

    for (int i = 0 ; i < n; i += 1) {
        if ((sum - arr[i]) % 2 == 0) {
            cnt += 1;
        }
    }

    cout << cnt << '\n';

    return 0;
}
