//A recursive function, int sumOfSquare(int n), that implements this function.

#include <iostream>
using namespace std;

int sumOfSquare(int n) {
    // base
    if (n<=0) {
        return 0;
    }
    // recursive
    int sum = sumOfSquare(n - 1);
    sum += n*n;
    return sum;
}

int main() {
    cout << sumOfSquare(5) << endl;
    return 0;
}