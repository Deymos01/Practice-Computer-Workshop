#include <iostream>

void fillArray(int* arr, int n){
	for (int i = 0; i < n; ++i){
		arr[i] = i+1;
	}
}

void printArray(int* arr, int n){
	for (int i = 0; i < n; ++i){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void reverseArray(int* arr, size_t n){
	for (size_t indx = 0; indx < n/2; ++indx){
		int temp = arr[indx];
		arr[indx] = arr[n - indx - 1];
		arr[n - indx - 1] = temp;
	}
}

int main(){
	int sizeArray;
	std::cout << "Input size of array: ";
	std::cin >> sizeArray;	
	int *arr = new int(sizeArray);
	fillArray(arr, sizeArray);
	std::cout << "\ninitial array: \n";
	printArray(arr, sizeArray);
	reverseArray(arr, sizeArray);
	std::cout << "\nreverse array: \n";
	printArray(arr, sizeArray);
	delete[] arr; 

	return 0;
}