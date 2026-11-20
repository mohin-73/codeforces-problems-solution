#include <bits/stdc++.h>

using namespace std;

bool isConsonant(char ch) {
    string vowels = "aeiouy";

    if (vowels.find(ch) == string::npos) {
        return true;
    }

    return false;
}

void solve() {
    string str;

    cin >> str;

    transform(begin(str), end(str), begin(str), ::tolower);

    string ans;

    for (char ch : str) {
        if (isConsonant(ch)) {
            ans += string(".") + ch;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
