#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 0 and N <= 25):";
        std::cin >> n;
    } while (n < 0 || n > 25);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++) {
            std::cout << ((n - i - 1 <= j) ? "*" : " ");
        }
        std::cout << std::endl;
    }
    return 0;
}