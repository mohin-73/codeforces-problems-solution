#include <bits/stdc++.h>

using namespace std;

void solve() {
    string word;

    cin >> word;

    word.front() = toupper(word.front());

    cout << word << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
