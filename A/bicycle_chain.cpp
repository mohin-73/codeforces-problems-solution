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
    int arr1[n];
    for (int i = 0; i < n; i += 1) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i += 1) {
        cin >> arr2[i];
    }

    vector<int> v;
    bool f = false;

    for (int i = 0; i < m; i += 1) {
        for (int j = 0; j < n; j += 1) {
            if (arr2[i] % arr1[j] == 0) {
                v.push_back(arr2[i] / arr1[j]);
                f = true;
            }
        }
    }

    sort(v.begin(), v.end(), greater<int>());

    int cnt = 1;

    if (f) {
        for (int i = 1; i < v.size(); i += 1) {
            if (v[i] == v[0]) {
                cnt += 1;
            } else {
                break;
            }
        }
    } else {
        cnt = 0;
    }

    cout << cnt << '\n';

    return 0;
}
