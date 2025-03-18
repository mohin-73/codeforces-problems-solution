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

    sort(arr, arr + n);

    int m = arr[n - 1] - *arr;
    long long w = ((1LL * n * (1ll * n - 1)) / 2);

    if (*arr != arr[n - 1]) {
        long long a = 0, b = 0, x = n - 1;
        while (a < n and arr[a] == *arr) {
            a += 1;
        }
        while (x >= 0  and arr[n - 1] == arr[x]) {
            b += 1;
            x -= 1;
        }
        w = a * b;
    }
    
    cout << m << ' ' << w << '\n';
    
    return 0;
}
