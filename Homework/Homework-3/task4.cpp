#include<bits/stdc++.h>

int main() {
    int precision;
    unsigned int counter_fracs = 0;
    double curr_sum = 0;
    double curr_pi = 4;

    do {
        std::cout << "Input precision (0 <= n <= 8):";
        std::cin >> precision;
    } while (precision <= 0 || precision >= 9);

    int tenh = 1;

    for (int i = 0; i < precision; i++) {
        tenh *= 10;
    }

    double i = 1;
    double curr_add = -i;
    while (int(curr_pi * tenh) != int(M_PI * tenh)) {
        curr_add = (curr_add < 0) ? 1. / i : -1. / i;
        curr_sum += curr_add;
        curr_pi = 4 * curr_sum;

        counter_fracs++;
        i += 2;
    }

    std::cout << "Number of fracs: " << counter_fracs << std::endl;
    std::cout << std::setprecision(14) << "PI = " << curr_pi;
    return 0;
}