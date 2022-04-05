#include <iostream>

int *readNumbers(){
    int * numbers;
    numbers = new int [10];

    for (int i = 0; i < 10; i++){
        int userinput;
        cin >> userinput;
        *(numbers+i) = userinput;
    }
    return numbers;
}

void printNumbers(int *numbers,int length) {
    
    
}
