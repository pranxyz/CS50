#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric
{
private:
   int binaryOperator(int x, int y)
public:
   virtual int reduce(vector<int> vec) = 0;

};
#endif

