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

    for (int i = 1; i < n; i++){
        curr_sin += sin(curr_sin);
    }

    std::cout << curr_sin;
    return 0;
}