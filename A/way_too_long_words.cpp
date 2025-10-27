#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str.length() <= 10) {
            cout << str << '\n';
            continue;
        }
        auto len = str.length();
        cout << str[0] << (len - 2) << str[len - 1] << '\n';
    }
    return 0;
}
