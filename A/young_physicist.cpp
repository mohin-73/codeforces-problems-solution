#include <iostream>
#include <cstdio>

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

    int sum_x = 0, sum_y = 0, sum_z = 0;
    int x, y, z;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    cout << (sum_x || sum_y || sum_z ? "NO\n" : "YES\n");

    return 0;
}
