#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, x;

    cin >> n >> m;

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < m; ++i) {
        cin >> x;
        maxHeap.push(x);
        minHeap.push(x);
    }

    int mn = 0, mx = 0;

    while (n--) {
        int a = minHeap.top();
        minHeap.pop();
        mn += a;
        if (a > 1) {
            minHeap.push(a - 1);
        }
        
        a = maxHeap.top();
        maxHeap.pop();
        mx += a;
        if (a > 1) {
            maxHeap.push(a - 1);
        }
    }

    cout << mx << ' ' << mn << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
 
    return 0;
}
