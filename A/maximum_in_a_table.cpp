#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n{};
    std::cin >> n;

    int arr[11][11] = {};
    for (int i = 0; i < 11; ++i) {
        arr[0][i] = 1;
    }
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < 11; ++j) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }

    std::cout << arr[n - 1][n] << '\n';

    return 0;
}
