#include <iostream>
extern void cpyia(int old_array[],int new_array[],int length);
    
int main() {
    int array_one[5]={1,2,3,4,5};
    int array_two[5];
    cpyia(array_one, array_two,5);
}