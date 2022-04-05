#include <iostream>
using namespace std;
extern void backwards(int [], int);
extern void backwards(int  array[], int number);

int main()
{
  int arr[] = {2,8,17,3,5,16}; int i;

  backwards(arr,6);

  for (i = 0; i< 6; i++)
    cout<<arr[i]<<endl;

//system("pause");
return 0;
}
