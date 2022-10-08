#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 0 and N <= 25):";
        std::cin >> n;
    } while (n < 0 || n > 25);

    int quantity_stars = -1;
    for (int i = 0; i < 2 * n - 1; i++) {
        //Изменение количества выводимых звездочек
        //Если не дошли до середины ромба, то увеличиваем количество звездочек, иначе - уменьшаем
        quantity_stars += (i < (2 * n - 1) / 2 + 1) ? 2 : -2;

        //Печать пробелов перед звездочками
        for (int k = 0; k < abs(2 * (n - i - 1)); k++) {
            std::cout << " ";
        }

        //Вывод звездочек
        for (int j = 0; j < quantity_stars; j++) {
            std::cout << ((j == 0 || j == quantity_stars - 1) ? "* " : "  ");
        }

        std::cout << std::endl;
    }

    return 0;
}
