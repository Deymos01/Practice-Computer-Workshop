#include <iostream>
#include"x.h"

//First realisation(41)
bool f(char*s){return a(s);}

//Second realisation (78)
// int f(char*s){int c=0,i=0,d=1;for(;s[i];c-=2*s[i++]-81)if(c<0)d=0;return!c*d;}


bool testCase(char* str, bool expected, bool& res){
    res = f(str);
    return res == expected;
}

int main()
{
    bool result = true;
    size_t cNumCases = 7;
    char* str_cases[cNumCases] = {
        "", 
        "()", 
        ")(",
        "()()",
        "(()",
        "())",
        "(())"
    };
    bool expected[cNumCases] = {true, true, false, true, false, false, true};
    for (size_t iter=0; iter < cNumCases; ++iter){
        bool res;
        bool curr = testCase(str_cases[iter], expected[iter], res);
        std::cout << "test \"" << str_cases[iter] << "\" is " << (curr ? "ok" : "failed") << '\n';
        std::cout << "\tresult: " << res << " expected " << expected[iter] << '\n';
        result = result && curr;
    }
    std::cout << "Total result: " << result << '\n';

    return 0;
}