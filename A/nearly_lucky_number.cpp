#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    cin >> str;
    int cnt = 0;

    for (int i = 0; i < str.length(); i += 1) {
        if (str[i] == '4' or str[i] == '7') {
            cnt += 1;
        }
    }

    if (!cnt) {
        cout << "NO" << endl;
        return 0;
    }
    
    while (cnt % 10 == 7 or cnt % 10 == 4) {
        cnt /= 10;
    }

    if (cnt) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
