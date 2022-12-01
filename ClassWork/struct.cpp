#include <iostream>

bool check(const char str[]) {
    int counter = 0;
    int idx = 0;
    while (str[idx] != '\0') {
        if (str[idx++] == '(')
            ++counter;
        else
            --counter;
        if (counter < 0)
            return false;
    }
    return counter == 0;
}

template<typename Type>
//template<class Type> аналог верхней строчки
bool testCase(bool (*func)(Type) /*Передается функция с любым типом аргумента, возвращающая bool*/,
              Type input,
              bool expected,
              bool &res) {
    res = func(input);
    return res == expected;
}

int counter(){
    // Глобальная переменная в области видимости функции. Снаружи доступа к этой переменной нет
    static int count = 0;

    return ++count;
}

struct CaseData{
    char str[16];
    bool expected;
};

int main() {

    CaseData test_cases[] = {
            {"", true},
            {"(", false},
            {")", false},
            {"()", true},
            {")(", false},
            {"()()", true},
            {"(()", false},
            {"())", false},
            {"(())", true},
            {")(()))", false},
            {"(())((()())())", true}
    };

    const size_t cNumCases = sizeof(test_cases)/sizeof(char*);
    bool result = true;
    for (size_t iter=0; iter < cNumCases; ++iter)
    {
        bool curr_check;
        bool curr_test = testCase(check, test_cases[iter].str, test_cases[iter].expected, curr_check);
        std::cout << "test \"" << test_cases[iter].str << "\" is " << (curr_test ? "ok" : "failed") << '\n';
        std::cout << "\tresult: " << curr_check << " expected " << test_cases[iter].expected << '\n';
        result = result && curr_test;
    }
    std::cout << "Total result: " << result << '\n';

    return 0;
}