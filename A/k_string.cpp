#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int k;
    cin >> k;

    string str;
    cin >> str;

    sort(str.begin(), str.end());

    string st = "", ans = "", temp = "";
    

    for (int i = 0; i < str.length(); i += k) {
        st = st + str[i];
    }

    int x = str.length() / st.length();

    while (x) {
        ans += st;
        temp += st;
        x--;
    }

    sort(temp.begin(), temp.end());

    if (temp == str) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
