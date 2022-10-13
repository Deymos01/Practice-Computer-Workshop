#include<bits/stdc++.h>

int main() {
    int n;
    double x;

    do {
        std::cout << "Input n (n>0): ";
        std::cin >> n;
    } while (n <= 0);

    std::cout << "Input x: ";
    std::cin >> x;

    double curr_sin = sin(x);
    double s = curr_sin;

    for (int i = 1; i < n; i++){
        s += sin(curr_sin);
        curr_sin = sin(curr_sin);
    }

    std::cout << s;
    return 0;
}