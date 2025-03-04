#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<long long> v;
    long long f = 0, s = 1;

    int n, k = 3;
    cin >> n;

    while (true) {
        v.push_back(f);
        v.push_back(s);
        if (s >= n) break;
        int k = s;
        s = s + f;
        f = k;
    }

    sort(v.begin(), v.end(), greater<int>());

    vector<long long> ans;

    for (int i = 0; i < v.size(); i += 1) {
        while (k && v[i] <= n) {
            k -= 1;
            ans.push_back(v[i]);
            n = n - v[i];
        }
    }

    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << '\n';
    
    return 0;
}
