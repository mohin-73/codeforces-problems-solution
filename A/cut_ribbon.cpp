#include <bits/stdc++.h>

#define MX 4001

using namespace std;

int solve(int n, int a, int b, int c, vector<int>& dp) {
    if (n == 0) {
        return 0;
    }

    if (n < 0) {
        return -MX;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    int aa = 1 + solve(n - a, a, b, c, dp);
    int bb = 1 + solve(n - b, a, b, c, dp);
    int cc = 1 + solve(n - c, a, b, c, dp);

    return dp[n] = max({aa, bb, cc});
}

int main() {
    int n, a, b, c;
    vector<int> dp(MX, -1);

    cin >> n >> a >> b >> c;

    cout << solve(n, a, b, c, dp) << '\n';

    return 0;
}
