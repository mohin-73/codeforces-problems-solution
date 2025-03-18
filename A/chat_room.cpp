#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str, st = "hello";
    cin >> str;

    int cnt = 0, k = 0;

    for (int i = 0; i < st.length(); i += 1) {
        while (k < str.length()) {
            if (str[k] == st[i]) {
                cnt += 1;
                k += 1;
                break;
            }
            k += 1;
        }
    }

    if (cnt == st.length()) {
        cout << "YES\n";
    }  else {
        cout << "NO\n";
    }

    return 0;
}
