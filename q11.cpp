//A tail recursive function, int sumOfSquare(int n), that implements this function.

#include <iostream>
using namespace std;

int sumOfSquare(int n){
    // base
    if(n==1){
        return 1;
    }
    // recursive
    else{
        return (n*n)+sumOfSquare(n-1);
    }
}

int main() {
    cout << sumOfSquare(5) << endl;
    return 0;
}

//A tail recursive function, int sumOfSquare(int n), that implements this function.

#include <cmath>

int sumOfSquareT(int n, int acc){
    // base
    if(n<=1)
        return 1;
    {
        return acc;
    }
    // recursive
    {
        acc = pow(n, 2) + acc;
        return (n*n)+sumOfSquareT(n-1, acc);
    }
}

int sumOfSquare(int n)
{
    int acc = 0;
    sumOfSquareT(n, acc);
}

