#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t{};
    std::cin >> t;

    while (t--) {
        int arr[5] = {};
        std::cin >> arr[0] >> arr[1];
        std::cin >> arr[3] >> arr[4];
        arr[2] = arr[0] + arr[1];

        int fibonacciness1 = 0;
        for (int i = 0; i < 3; ++i) {
            if (arr[i] + arr[i + 1] == arr[i + 2]) {
                fibonacciness1 += 1;
            }
        }

        arr[2] = arr[4] - arr[3];
        int fibonacciness2 = 0;
        for (int i = 0; i < 3; ++i) {
            if (arr[i] + arr[i + 1] == arr[i + 2]) {
                fibonacciness2 += 1;
            }
        }

        std::cout << std::max(fibonacciness1, fibonacciness2) << '\n';
    }

    return 0;
}
