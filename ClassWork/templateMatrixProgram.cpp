#include <iostream>
#include <cstring>
#include <fstream>

int main(int argc, char *argv[], char *env[]) { //Третья переменная char* env[] - список переменных окружения локалки

    std::cout << "Argc count: " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
    }

    if (argc < 4) {
        std::cout << "not enough arguments" << std::endl;
        return 1;
    }

    if (strcmp(argv[1], "-det") == 0) {
        std::cout << "this is determinant calculator" << std::endl;
    } else {
        std::cout << "this is inv matrix calculator" << std::endl;
    }

    std::ofstream out(argv[3]);
    if (!out) {
        std::cout << "error opening file" << std::endl;
        return 2;
    }

    out << "Hello" << std::endl;
    out.close();

    std::cout << "\n\n";
    std::cout << "Env vars: ";
    while (env) {
        std::cout << *env++ << std::endl;
    }
    return 0;
}