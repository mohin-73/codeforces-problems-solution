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

    int arr[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }

    int p = 1, mn = arr[0];

    for (int i = 1; i < n; i += 1) {
        if (mn > arr[i]) {
            mn = arr[i];
            p = i + 1;
        }
    }

    int cnt = 0;
    
    for (int i = 0; i < n; i += 1) {
        if (arr[i] == mn) {
            cnt += 1;
            if (cnt == 2) {
                cout << "Still Rozdil\n";
                return 0;
            }
        }
    }

    cout << p << '\n';
    
    return 0;
}
