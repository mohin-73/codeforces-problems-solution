#include <bits/stdc++.h>

using namespace std;

void solve() {
    string word;
    int low = 0, up = 0;

    cin >> word;

    for (char ch : word) {
        if (ch >= 'a') {
            ++low;
        } else {
            ++up;
        }
    }

    if (low >= up) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    } else {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    cout << word << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
