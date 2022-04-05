#ifndef FILTERFORPOSITIVETWODIGIT_H
#define FILTERPOSITIVETWODIGIT_H
#include <vector>


class FilterForTwoDigitPositive : public FilterGeneric
{
private:
   bool g(int x);
public:
   void filter(vector<int> vec, int i, vector<int> *v);
   vector<int> filter(vector<int> vec);
};

#endif