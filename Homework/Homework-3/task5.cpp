#include<bits/stdc++.h>

double f(double x, double eps) {

    double next_a = x;
    double curr_a = 0;
    double fact = 1;
    double power_x = x;
    int iter = 1;

    while (std::abs(next_a - curr_a) >= eps) {
        power_x = (-1) * power_x * x * x;
        fact *= (iter + 1) * (iter + 2);
        curr_a = next_a;
        next_a += power_x / fact;
        iter += 2;
    }
    return next_a;
}

int main() {
    double x1, x2, dx, eps;

    std::cout << "Input x1:";
    std::cin >> x1;
    std::cout << "Input x2:";
    std::cin >> x2;
    do {
        std::cout << "Input dx (dx > 0):";
        std::cin >> dx;
    } while (dx <= 0);
    do {
        std::cout << "Input eps (eps > 0):";
        std::cin >> eps;
    } while (eps <= 0);

    if (x1 > x2) std::swap(x1, x2);

    std::cout << " f(x)\t| sin(x)" << std::endl;
    for (x1 += dx; x1 < x2; x1 += dx) {
        std::cout << "--------------------" << std::endl;
        double result = f(x1, eps);
        std::cout << " " << result << "\t| " << sin(x1) << std::endl;
    }

    return 0;
}