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
    int len = str.length(), l = 0;

    for (int i = 0; i < len; i += 1) {
        if (str[i] >= 'a') 
            l += 1;
    }  

    if (l * 2 >= len) {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    cout << str << '\n';

    return 0;
}
