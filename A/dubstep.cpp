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
    vector<string> vs;

    cin >> str;
    str += "WUB";

    string s = "";

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 'W' and i + 2 < str.length() and str[i+1] == 'U' and str[i+2] == 'B') {
            if (!s.empty()) {
                vs.push_back(s);
            }
            s = "";
            i += 2;
        } else {
            s += str[i];
        }
    }

    for (int i = 0; i < vs.size(); ++i) {
        cout << vs[i] << (i == vs.size() - 1 ? "" : " ");
    }
    cout << '\n';

    return 0;
}
