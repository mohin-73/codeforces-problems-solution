#include <iostream>
#include <string>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::string grid[10];
        for (int i = 0; i < n; ++i) {
            std::cin >> grid[i];
        }

        std::set<int> s;
        
        for (int i = 0; i < n; ++i) {
            int ctr = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    ctr += 1;
                }
            }
            if (ctr > 0) {
                s.insert(ctr);
            }
        }

        if (s.size() == 1) {
            std::cout << "SQUARE\n";
        } else {
            std::cout << "TRIANGLE\n";
        }
    }

    return 0;
}
