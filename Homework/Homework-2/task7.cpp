#include<bits/stdc++.h>

bool is_in_area(double x, double y) {
    return (pow((x * x + y * y - 1), 3) - x * x * y * y * y <= 0);
}

int main() {
    int height = 21;
    int width = 41;
    double x, y = 1.5;
    double step_x = double(3) / double(width);
    double step_y = double(3) / double(height);
    for (int row = 0; row <= height; row++) {
        x = -1.5;
        for (int col = 0; col <= width; col++) {
            std::cout << (is_in_area(x, y) ? "*" : ".");
            x += step_x;
        }
        y -= step_y;
        std::cout << std::endl;
    }

    return 0;
}