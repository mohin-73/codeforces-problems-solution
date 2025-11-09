#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << (a ^ b) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*
───────────────────────────────────────────────────────────────────────────
    Problem
───────────────────────────────────────────────────────────────────────────
    Given two integers a and b, find the smallest integer x such that
    (a ⊕ x) = (b ⊕ x). 
───────────────────────────────────────────────────────────────────────────
    XOR (⊕) Properties:
───────────────────────────────────────────────────────────────────────────
    1️⃣ x ^ x = 0        → any number XOR with itself gives 0
    2️⃣ x ^ 0 = x        → XOR with 0 keeps the number unchanged
    3️⃣ Commutative: a ^ b = b ^ a
    4️⃣ Associative: (a ^ b) ^ c = a ^ (b ^ c)
───────────────────────────────────────────────────────────────────────────
*/
