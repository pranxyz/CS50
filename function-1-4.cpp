#include <iostream> 
using namespace std; 

void cpyda(double *old_array,double *new_array,int length) {
    double *ptr1, *ptr2;
    ptr1 = old_array;
    ptr2 = new_array;
    for (double *ptr1=old_array, *ptr2=new_array, i=0;i<length;ptr1++,ptr2++,i++) {
        *ptr2 = *ptr1;
        cout << *ptr2 << endl;
    }
}