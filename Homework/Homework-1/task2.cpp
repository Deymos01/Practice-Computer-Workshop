#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Input values a, b, c:";
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0){
                std::cout << "infinite number of solutions";
            } else {
                std::cout << "no solutions";
            }
        } else {
            std::cout << "x = " << -c / b;
        }
    } else {
        double d = b * b - 4 * a * c;
        if (d < 0) {
            std::cout << "no solutions";
        } else {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            if (x1 != x2) {
                std::cout << "x1 = " << x1 << "; x2 = " << x2;
            } else {
                std::cout << "x = " << x1;
            }
        }
    }
    return 0;
}
