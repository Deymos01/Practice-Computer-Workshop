<<<<<<< HEAD
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


void shiftArray(int* arr, int n, int k){
    int *arrBuff = new int[n];
    for (int i = 0; i < n; ++i){
        if (n - k + i >= n){
            arrBuff[i-k] = arr[i];
        } else {
            arrBuff[n - k + i] = arr[i];
        }
    }
    for (int i = 0; i < n; ++i){
        arr[i] = arrBuff[i];
    }
    delete[] arrBuff;
}

int main()
{
	int sizeArray;
	std::cout << "Input size of array: ";
	std::cin >> sizeArray;	
	int *arr = new int(sizeArray);
	fillArray(arr, sizeArray);
	std::cout << "\ninitial array: \n";
	printArray(arr, sizeArray);
	int k;
	std::cout << "input shift: ";
	std::cin >> k;
	shiftArray(arr, sizeArray, k);
	std::cout << "\nshift array: \n";
	printArray(arr, sizeArray);
	delete[] arr; 

	return 0;
}
=======
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


void shiftArray(int arr[], int n, int k){
    int *arrBuff = new int[n];
    for (int i = 0; i < n; ++i){
        if (n - k + i >= n){
            arrBuff[i-k] = arr[i];
        } else {
            arrBuff[n - k + i] = arr[i];
        }
    }
    for (int i = 0; i < n; ++i){
        arr[i] = arrBuff[i];
    }
    delete[] arrBuff;
}

int main()
{
	int sizeArray;
	std::cout << "Input size of array: ";
	std::cin >> sizeArray;	
	int *arr = new int(sizeArray);
	fillArray(arr, sizeArray);
	std::cout << "\ninitial array: \n";
	printArray(arr, sizeArray);
	int k;
	std::cout << "input shift: ";
	std::cin >> k;
	shiftArray(arr, sizeArray, k);
	std::cout << "\nshift array: \n";
	printArray(arr, sizeArray);
	delete[] arr; 

	return 0;
}
>>>>>>> 3cb7bb9ee688240ee729a664431d226240d42837
