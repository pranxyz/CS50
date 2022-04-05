#ifndef FILTERODD_H
#define FILTERODD_H
#include <vector>

class FilterOdd : public FilterGeneric
{
private:
   bool g(int x);

public:
   void filter(vector<int> vec, int i, vector<int> *v);
   vector<int> filter(vector<int> vec);
};
#endif