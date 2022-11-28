#include <iostream>

int main(void) {

    size_t n;
    std::cin >> n;

    long *arr = new long[n];

    for (size_t i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete [] arr;
    
}