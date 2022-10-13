#include<bits/stdc++.h>

int main() {
    int n, power = 1;
    double sum_sequence = 0;

    do {
        std::cout << "Input n (n>=0): ";
        std::cin >> n;
    } while (n < 0);

    for (int i = 0; i <= n; i++) {
        power *= (i == 0) ? 1 : 2;
        sum_sequence += (double) 1 / (double) power;
    }

    std::cout << std::setprecision(10) << sum_sequence;

    return 0;
}