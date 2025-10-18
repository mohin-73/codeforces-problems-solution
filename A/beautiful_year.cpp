#include <iostream>

int main() {
    int n{};
    std::cin >> n;

    while(++n) {
        int t = n, arr[10] = {};
        bool flag = true;

        while(t) {
            if (arr[t % 10]) {
                flag = false;
                break;
            }
            arr[t % 10] = true;
            t /= 10;
        }

        if (flag) {
            break;
        }
    }

    std::cout << n << '\n';

    return 0;
}
