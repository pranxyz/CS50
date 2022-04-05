#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

class ReduceMinimum : public ReduceGeneric
{
private:
   int binaryOperator(int x, int y);
public:
   void reduce(vector<int> vec, int i, int *min);
   int reduce(vector<int> vec);
};
#endif