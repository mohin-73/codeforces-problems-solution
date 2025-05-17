#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve(const string& str) {
    vector<bool> seen(26, false);
    int distinct = 0;

    for (char ch : str) {
        int k = ch - 'a';
        if (k < 0 || k > 25) 
            continue;
        if (!seen[k]) {
            seen[k] = true;
            distinct++;
        }
    }

    return distinct;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    getline(cin, str);

    int result = solve(str);
    cout << result << '\n';

    return 0;
}
