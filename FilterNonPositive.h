#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H
#include <vector>

class FilterNonPositive : public FilterGeneric
{
private:
   bool g(int x)
   {
       return x < 0;
   }

public:
   void filter(vector<int> vec, int i, vector<int> *v);
   vector<int> filter(vector<int> vec);
};
#endif