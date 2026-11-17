#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, t;
    string str;

    cin >> n >> t >> str;

    while (t--) {
        int i = 0;

        while (i + 1 < str.length()) {
            if (str[i] == 'B' && str[i + 1] == 'G') {
                swap(str[i], str[i + 1]);
                ++i;
            }
            
            ++i;
        }
        
    }

    cout << str << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
