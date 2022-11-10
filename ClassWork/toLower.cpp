<<<<<<< HEAD
#include <iostream>

void printStr(char str[]){
	int i = 0;
	while (str[i] != '\0'){
		std::cout << str[i];
		++i;
	}
	std::cout << std::endl;
}

void toLower(char str[]){
	while (*str){
		if ('A' <= str[0] && str[0] <= 'Z')
			str[0] += 32; 
		++str;
	}
}

int main()
{
	char str[] = "Lorem IpsUm";
	std::cout << "Initial string: ";
	printStr(str);
	toLower(str);
	std::cout << "Lowercase string: ";
	printStr(str);
	return 0;
=======
#include <iostream>

void printStr(char str[]){
	int i = 0;
	while (str[i] != '\0'){
		std::cout << str[i];
		++i;
	}
	std::cout << std::endl;
}

void toLower(char str[]){
	while (*str){
		if ('A' <= str[0] && str[0] <= 'Z')
			str[0] += 32; 
		++str;
	}
}

int main()
{
	char str[] = "Lorem IpsUm";
	std::cout << "Initial string: ";
	printStr(str);
	toLower(str);
	std::cout << "Lowercase string: ";
	printStr(str);
	return 0;
>>>>>>> 3cb7bb9ee688240ee729a664431d226240d42837
}