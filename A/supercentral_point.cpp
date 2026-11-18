#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;

    cin >> n;

    vector<pair<int, int>> vp(n);

    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }

    int count = 0;

    for (int i = 0; i < n; ++i) {
        int x = vp[i].first;
        int y = vp[i].second;

        bool left = 0, right = 0, up = 0, low = 0;

        for (int j = 0; j < n; ++j) {
            int xx = vp[j].first;
            int yy = vp[j].second;

            if (x < xx && y == yy) {
                right = 1;
            }

            if (x > xx && y == yy) {
                left = 1;
            }

            if (x == xx && y > yy) {
                low = 1;
            }

            if (x == xx && y < yy) {
                up = 1;
            }
        }

        count += (left & right & up & low);
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
