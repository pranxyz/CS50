#include <iostream>
extern 

int main() {
    int *numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers;
    return 0;
}