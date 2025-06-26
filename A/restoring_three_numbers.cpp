#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int arr[4] = {};
    for (int i = 0; i < 4; ++i) {
        std::cin >> arr[i];
    }
    std::sort(arr, arr + 4);

    int a = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[2];

    std::cout << a << " " << b << " " << c << '\n';

    return 0;
}
