#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    bool val;
    int r, c;

    for (int i = 1; i <= 5; i += 1) {
        for (int j = 1; j <= 5; j += 1) {
            cin >> val;
            if (val == 1) {
                r = i;
                c = j;
            }
        }
    }

    cout << abs(r - 3) + abs(c - 3) << '\n';
    
    return 0;
}

/* 
    The minimum integer distance between two points is 
    the absolute difference between their co-ordinates.
    Manhattan Distance Formula:
    d = |x1 - x2| + |y1 - y2|
*/
