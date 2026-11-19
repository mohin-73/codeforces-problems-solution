#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;

    cin >> str;

    string word;

    for (int i = 0; i < str.length();) {
        if (str.substr(i, 3) == "WUB") {
            if (word.length()) {
                cout << word << ' ';
                word = "";
            }

            i += 3;
        } else {
            word.push_back(str[i++]);
        }
    }

    if (word.length()) {
        cout << word << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
