#include <iostream>

int main() {
    double a, b, c, d;
    std::cout << "Input endpoints of segment A:";
    std::cin >> a >> b;
    std::cout << "Input endpoints of segment B:";
    std::cin >> c >> d;
    double x, y;
    std::cout << "Input point X:";
    std::cin >> x;
    std::cout << std::endl;
    y = (x-a)*(d-c)/(b-a) + c;
    std::cout << "y = " << y;
    return 0;
}
