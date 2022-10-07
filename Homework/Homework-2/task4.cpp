#include<bits/stdc++.h>

void print_spaces(unsigned int number_of_spaces) {
    for (int k = 0; k < number_of_spaces; k++) {
        std::cout << " ";
    }
}

int main() {
    int n, quantity_diamonds;
    do {
        std::cout << "Input N (N >= 0 and N <= 25):";
        std::cin >> n;
    } while (n < 0 || n > 25);
    do {
        std::cout << "Input number of diamonds (>=0):";
        std::cin >> quantity_diamonds;
    } while (quantity_diamonds < 0);

    int quantity_stars = -1;
    for (int i = 0; i < 2 * n - 1; i++) {
        //Изменение количества выводимых звездочек
        //Если не дошли до середины ромба, то увеличиваем количество звездочек, иначе - уменьшаем
        (i < (2 * n - 1) / 2 + 1) ? quantity_stars += 2 : quantity_stars -= 2;

        for (int diamond = 0; diamond < quantity_diamonds; diamond++) {

            //Печать пробелов перед звездочками
            print_spaces(abs(n - i - 1));

            //Вывод звездочек
            for (int j = 0; j < quantity_stars; j++) {
                std::cout << "*";
            }

            //Печать пробелов после звездочек
            print_spaces(abs(n - i - 1));
        }
        std::cout << std::endl;
    }

    return 0;
}