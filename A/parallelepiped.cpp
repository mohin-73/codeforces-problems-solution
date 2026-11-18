#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ab, bc, ca;

    cin >> ab >> bc >> ca;

    int a = sqrt((ab * ca) / bc);
    int b = sqrt((ab * bc) / ca);
    int c = sqrt((bc * ca) / ab);

    cout << 4 * (a + b + c) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
