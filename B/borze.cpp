#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, ans;

    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '.') {
            ans.push_back('0');
        } else if (str[i + 1] == '.') {
            ans.push_back('1');
            i += 1;
        } else {
            ans.push_back('2');
            i += 1;
        }
    }

    cout << ans << '\n';

    return 0;
}
