#include<bits/stdc++.h>

int main() {
    int n;
    do {
        std::cout << "Input N (N >= 0 and N <= 25):";
        std::cin >> n;
    } while (n < 0 || n > 25);

    int quantity_stars = -1;
    for (int i = 0; i < 2 * n - 1; i++) {

        //Печать пробелов перед звездочками
        for (int k = 0; k < abs(n - i - 1); k++) {
            std::cout << " ";
        }

        //Изменение количества выводимых звездочек
        //Если не дошли до середины ромба, то увеличиваем количество звездочек, иначе - уменьшаем
        quantity_stars += (i < (2 * n - 1) / 2 + 1) ? 2 : -2;

        //Вывод звездочек
        for (int j = 0; j < quantity_stars; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
