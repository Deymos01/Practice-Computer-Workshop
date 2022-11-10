#include <iostream>
//Всегда выгоднее выделять статическую память сразу, чем изменять размер массива динамически
void push_back(int*& arr, size_t sz, int val) { //int*& arr - передача ссылки в arr
    int *tmp = new int[sz + 1];
    for (size_t indx = 0; indx < sz; ++indx) {
        tmp[indx] = arr[indx];
    }
    tmp[sz] = val;
    delete[] arr;
}

void printArray(int *arr, size_t sz){
    for (size_t i = 0; i < sz; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
   int n = 3;
   int *arr = new int[n];

   arr[0] = arr[1] = arr[2] = 0;

   printArray(arr, n);
   push_back(arr, n++, 10);
   printArray(arr, n);

   delete[] arr;
   
    return 0;
}