#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 1): ";
        std::cin >> n;
    } while (n < 1);

    int sum = 0;

    std::cout << std::endl;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
        std::cout << i << " ";
    }
    std::cout << std::endl << double (sum) / double (n);
    return 0;
}