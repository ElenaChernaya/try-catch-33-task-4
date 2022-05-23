#include <iostream>

template<typename T>
void input(T arr[], int size)
{
    std::cout << "Input values: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> *(arr+i);
    }
}

template<typename T>
T _sum(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += *(arr+i);
    }
    return sum;
}


int main() {
    const int Size = 3;
    int arr[Size];
    input<int>(arr, Size);

    std::cout << "\nSum: " << _sum<int>(arr, Size)/Size << std::endl;

    double arr1[Size];
    input<double>(arr1, Size);

    std::cout << "\nSum: " << _sum<double>(arr1, Size)/Size << std::endl;
}