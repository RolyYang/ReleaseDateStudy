#ifndef Bootstrapping_h
#define Bootstrapping_h

#include "Vector.h"
#include "Stock.h"

vector<int> randIndex(const int range, const int N);
Vector AAR(StockVector &stocks, Map &prices, const SPYStock &spy, vector<int> &rand_indices, const int N);
Vector CAAR(const Vector &aar);
StockVector::iterator findStock(StockVector &stocks, string stockname);


#endif /* Bootstrapping_h */
