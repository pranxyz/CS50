#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric
{
private:
   bool g(int value);
public:
   virtual vector<int> filter(vector<int> vec) = 0;
};
#endif