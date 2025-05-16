#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string str;
    getline(cin, str);

    vector<bool> seen(26, false);
    int distinct = 0;

    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (!seen[index]) {
                seen[index] = true;
                distinct++;
            }
        }
    }

    cout << distinct << '\n';

    return 0;
}
