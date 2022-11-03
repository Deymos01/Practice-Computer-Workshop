#include <iostream>

void stripedArray(int *arr, int sz){
	for (int i = 0; i < sz/2; ++i){
		std::cout << arr[i] << " " << arr[sz - i - 1] << " ";
	}
	if (sz % 2 != 0){
		std::cout << arr[sz/2];
	}
	std::cout << std::endl;
}

int main()
{
	int sizeArray;
	std::cout << "Input size of array: ";
	std::cin >> sizeArray;	
	int *arr = new int(sizeArray);
	std::cout << "Input " << sizeArray << " items:" << std::endl;
	for (int i = 0; i < sizeArray; ++i){
		std::cin >> arr[i];
	}

	stripedArray(arr, sizeArray);
	return 0;
}