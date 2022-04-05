#include <iostream>
using namespace std; 

void cpyia(int old_array[],int new_array[],int length) {
    int *ptr1 = old_array;
    int *ptr2 = new_array;
    for(int i=0;i<length;i++) {
        *(ptr2+i) = *(ptr1+i);
        cout << *(ptr2+i) << endl;
    }
}