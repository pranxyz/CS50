#include "TruckLoads.h"

//return fib value
int TruckLoads::TruckLoad(int n)
{ 
    int t[n+2];
    int i;
    
    t[0] = 0;
    t[1] = 1;
    
    for (i = 2; i <= n; i++)
    {
        t[i] = t[i-1] + t[i-2];
    }
    return t[n];
};