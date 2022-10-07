#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 0 and N <= 25):";
        std::cin >> n;
    } while (n < 0 || n > 25);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}