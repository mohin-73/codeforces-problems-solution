#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i += 1) {
        cin >> arr[i];
    }

    long long curr = 1, ans = 0;

    for (int i = 0; i < m; i += 1) {
        if (curr > arr[i]) {
            ans = ans + n - curr + 1;
            curr = 1;
        }
        ans = ans + arr[i] - curr;
        curr = arr[i];
    }
    
    cout << ans << '\n';
    
    return 0;
}
