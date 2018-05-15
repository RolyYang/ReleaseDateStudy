#ifndef Vector_h
#define Vector_h

#include <vector>
#include <map>
#include <iostream>
#include "Stock.h"

using namespace std;

typedef vector<double> Vector;
typedef vector<string> StringVector;
typedef vector<Stock> StockVector;
typedef map<string, Vector> Map;


Vector operator+(const Vector& V,const Vector& W);
Vector operator-(const Vector& V, const Vector& W);
Vector operator/(const Vector& V, const Vector& W);
Vector operator/(const Vector& V, const int x);
ostream & operator<<(ostream & out, Vector & V);
ostream & operator<<(ostream & out, vector<int> & V);

#endif /* Vector_h */
