#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ab, bc, ac;

    cin >> ab >> bc >> ac;

    int a = sqrt((ab * ac) / bc);
    int b = sqrt((ab * bc) / ac);
    int c = sqrt((bc * ac) / ab);

    cout << 4 * (a + b + c) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
