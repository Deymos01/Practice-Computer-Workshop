#include <iostream>
#include <cmath>

int main() {
    double x, y, r, R;
    std::cout << "Input coords:";
    std::cin >> x >> y;
    std::cout << "Input small radius r:";
    std::cin >> r;
    std::cout << "Input big radius R:";
    std::cin >> R;
    if (r > R) {
        std::swap(r, R);
    }

    if (x * x + y * y > r * r && x * x + y * y < R * R) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
