#include <iostream>

extern int even_count(int n);

int main() {
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    std::cout << "The number of evens are: " << even_count(n)<< std::endl;
    return 0;
}
