#include <iostream>

void reverseArray(int* arr, size_t n){
	for (size_t indx = 0; indx < n; ++indx){
		std::cout << arr[n - indx - 1] << " ";
	}
	std::cout << std::endl;
}

int main(){
	int sizeArray;
	std::cout << "Input size of array: ";
	std::cin >> sizeArray;	
	int *arr = new int(sizeArray);
	std::cout << "Input " << sizeArray << " items:" << std::endl;
	for (int i = 0; i < sizeArray; ++i){
		std::cin >> arr[i];
	}

	reverseArray(arr, sizeArray);

	return 0;
}