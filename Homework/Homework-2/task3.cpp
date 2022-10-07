#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 0):";
        std::cin >> n;
    } while (n < 0);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < n - i; j++) {
            std::cout << " ";
        }
        for (int j = 2 * i - 1; j > 0; j--) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}